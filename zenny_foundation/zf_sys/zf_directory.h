//
//  zf_directory.h
//  ZennyFoundationTest
//
//  Created by Zenny Chen on 2019/3/18.
//  Copyright © 2019 Zenny Chen. All rights reserved.
//

#ifndef zf_directory_h
#define zf_directory_h

#include <stdbool.h>

/// Get the current the executable absolute path
/// @return the current the executable absolute path
extern const char* zf_get_current_exec_path(void);

/// Create the directory at the specified path.
/// @return true if successful; Otherwise, false.
extern bool zf_create_directory(const char *path);

#endif /* zf_directory_h */
