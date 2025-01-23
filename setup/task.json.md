## task.json

    {
        "version": "2.0.0",
        "tasks": [
            {
                "label": "compile",
                "type": "shell",
                "command": "g++",
                "args": [
                    "-std=c++17",
                    "-o",
                    "${fileBasenameNoExtension}",
                    "${file}"
                ],
                "group": {
                    "kind": "build",
                    "isDefault": false
                }
            },
            {
                "label": "compile and run",
                "type": "shell",
                "command": "g++ -std=c++17 -o \"${fileBasenameNoExtension}\" \"${file}\" && .\\${fileBasenameNoExtension} < input.txt > output.txt",
                "group": {
                    "kind": "build",
                    "isDefault": true
                }
            }
        ]
      }


## To run and see the input output at a time 

        ctrl+shift+B
