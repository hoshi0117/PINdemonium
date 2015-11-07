#pragma once
#include "stdafx.h"
#include <string.h>

VOID myFunc();


/* 
   Add a new section to a dumped file 
   
   Args:
   dump_path = path to the dumped file 
   sectionName = name of the new section that you want to create
   sectionSize = size of the section you want to add 
   sectionData = stuff to put in the new section 

   Ret:
   True or False if Scylla sucessfully add the new section  
*/
BOOL ScyllaWrapAddSection(const WCHAR * dump_path , const CHAR * sectionName, DWORD sectionSize, BYTE * sectionData);