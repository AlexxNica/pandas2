// This file is a part of pandas. See LICENSE for details about reuse and
// copyright holders

// Trick borrowed from dynd-python for initializing the NumPy array API

// Trigger the array import (inversion of NO_IMPORT_ARRAY)
#define NUMPY_IMPORT_ARRAY
