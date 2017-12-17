# `prebuilt-example`

[![Build Status](https://travis-ci.org/emilbayes/prebuilt-example.svg?branch=master)](https://travis-ci.org/emilbayes/prebuilt-example)
[![Build status](https://ci.appveyor.com/api/projects/status/hpr6qb4gksfs65fg?svg=true)](https://ci.appveyor.com/project/emilbayes/prebuilt-example)

> An example of auto-deploying prebuilts to Github Releases

## How-to (more extensive guide to follow)

* Add `.travis.yml` and `appveyor.yml` with deploy to Github Releases
* Make a tagged release, and wait for CI to complete
* Download archive files and extract to `prebuilds`. It should look something
  like the following:

  ```
  prebuilds/
  ├── darwin-x64
  │   └── ...
  ├── linux-x64
  │   └── ...
  ├── win32-ia32
  │   └── ...
  └── win32-x64
      └── ...
  ```
* *Optional:* Run `npm pack` and inspect the archive to make sure the correct
  files are included. You can do so with `tar -tvf ARCHIVE_NAME.tgz`
* Run `npm publish` to release your new module with prebuilts!

## Security considerations

## License

[ISC](LICENSE)
