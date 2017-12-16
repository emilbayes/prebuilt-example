{
  "targets": [
    {
      "target_name": "index",
      "sources": [ "index.cc" ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
      ],
    }
  ]
}
