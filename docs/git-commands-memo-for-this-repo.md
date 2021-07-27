# Git commands memo for the _"Dr. Nord's Hello World in C++"_ repository

A command set used to create this repository (using the Bash command shell).  
Might be useful for beginners to master Git and GitHub.

Copyright (C) 2021 Dr. Nord

#### Create a repository on GitHub
Name:
```
dr-nord-s-hello-world-in-cpp
```  
About: 
```
Dr. Nord's Hello World in C++: the beginner's project with explanatory comments and support files including documentation and useful links.
```
Topics:
```
c-plus-plus example project beginners informative 
```
#### Create a local repository

```
git init
```

#### Add description of the repository
```
printf "Dr. Nord's Hello World in C++" > .git/description
```

#### Setup digital signature (optional)
If you want to reproduce this steps you need to generate a public/private key-pair and configure Git to sign commits.
- Set auto-sign commits and tags for current repository
```
git config commit.gpgsign true
git config tag.gpgsign true
```
- Set a default public key ID (or a full 40-character fingerprint)  
```
git config user.signingkey FBEAEFB56F021E9A17F53C4B01193969593B7668
```


### Version 1.0.0 creation

#### Stage (index) the source code file
```
git add main.cpp
```

#### Initial commit
```
git commit -m "feat: initial commit of source code"
```

#### Stage and commit (hereinafter 'add' or 'update' context dependent) support files
```
git add .gitignore makefile
git commit -m "feat: add support files" -m "Add '.gitignore' and 'makefile'"
```

#### Add documentation
```
git add LICENSE-MIT.txt README.md docs/\*
git commit -m "docs: initial documentation" -m "Add Readme, licenses, Contribution Guide and Code of Conduct" 
```

#### Add templates for GitHub
```
git add .github/\*
git commit -m "docs: add GitHub templates" -m "Add templates for Issues and Pull Requests"
```

#### Add an annotated tag to the last commit (v1)
```
git tag -a v1.0.0 -m "classic"
```

#### Create and add changelog
```
git tag -l $(git describe) --format='%(taggerdate:short) Release: %(tag)-%(contents:subject)%0A' > CHANGELOG.md
git log --pretty="  - %s%n%n    %b" >> CHANGELOG.md
git add CHANGELOG.md
git commit -m "docs: add changelog"
```

#### Move the last tag
```
git tag -d v1.0.0
git tag -a v1.0.0 -m "classic"
```
or
```
git tag -af v1.0.0 -m "classic"
```

#### Add GitHub repository url to the list of servers under 'origin' name, check the result 
```
git remote add origin https://github.com/DrNord/dr-nord-s-hello-world-in-cpp.git
git remote -v
```

#### Push to remote repository (forced) with tags
```
git push origin main -f --tags
```

**Manually create a release in GitHub**:
- in the 'Releases' section click on 'tags'
- switch to 'Tags' tab
- click the three dots sign on the right, the 'Create release' button will appear (click it)
- a new release should be generated from the existing tag, choose a release title ```v1.0.0-classic```
- fill release description:
```
The classic source code, despite its brevity, clarifies the basic structure of a C++ program (run the executable from a command line).
```
- add executable (optional)
<br/>


### Version 2.0.0 creation

#### Change license
- remove license file from tracked list (to leave a file on a disk use an option '--cached')
```
git rm LICENSE-MIT.txt
```
- add new license file (bash uses '!' for history expansion, so use an editor for message forming)
```
git add LICENSE-GNU-GPL.txt
git commit
```
Copy-paste this to your editor:
```
docs!: change license to GNU GPL v3.0 or later
```

#### Add extended source code (bash uses '!' for history expansion, so use an editor for message forming)
```
git add main-x.cpp makefile-x
git commit
```
Copy-paste this to your editor:
```
feat!: implement user input

BREAKING CHANGE: add extended source code 'main-x.cpp' with implemented user input, add 'makefile-x'
```

#### Add Git commands memo
```
git add docs/git-commands-memo-for-this-repo.md
git commit -m "docs: add Git commands memo" -m "Add Git commands list used to create this repository"
```

#### Update Readme
```
git add README.md
git commit -m "docs: update readme" -m "Add information about the extended version"
```

#### Add an annotated tag to the last commit (v2)
```
git tag -a v2.0.0 -m "extended"
```

#### Update changelog
- save old changelog
```
mv CHANGELOG.md CHANGELOG-old.md
```
- create new changelog
```
git tag -l $(git describe) --format='%(taggerdate:short) Release: %(tag)-%(contents:subject)%0A' > CHANGELOG.md
git log v1.0.0..v2.0.0 --pretty="  - %s%n%n    %b" >> CHANGELOG.md
```
- add info from old to new changelog
```
cat CHANGELOG-old.md >> CHANGELOG.md
```
- update changelog
```
git add CHANGELOG.md
git commit -m "docs: update changelog"
```
- check for untracked files to delete, if OK - execute deletion
```
git clean -n
git clean -f
```

#### Move the last tag
```
git tag -af v2.0.0 -m "extended"
```

#### Push to remote repository with tags
```
git push origin main --tags
```

**Manually create a release in GitHub**:
- a new release should be generated from the existing tag, choose a release title ```v2.0.0-extended```
- fill release description:
```
The classic source code, despite its brevity, clarifies the basic structure of a C++ program. The extended source code covers additional issues such as copyright, licensing information, user interaction, etc.
```
- add executable (optional)

<br/>


##### Other useful commands

- Commit history
```
git log
```
- Download remote objects and references with tags
```
git fetch --tags
```
- Delete all tags
```
 git tag -d $(git tag -l)
```
- Amend the last commit
```
git commit --amend -m "Title" -m "Description"
```
- Delete a remote tag
```
git push --delete origin v1.0.0
```
- Simple changelog (GNU Coding Standards)  
  cs: short date ISO 8601 - YYYY-MM-DD  
  cn: committer name  
  ce: committer e-mail  
  n: new line  
  s: commit subject (title)  
  b: commit body
```
git log --pretty="- %cs %cn <%ce>%n%n    %s%n%n    %b" > CHANGELOG.md
```
- Commit signature checkout
```
git log --show-signature
```
- Remove parameter
```
git config --unset --global user.name
```
