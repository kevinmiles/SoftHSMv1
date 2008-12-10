/* $Id$ */

/*
 * Copyright (c) 2008 .SE (The Internet Infrastructure Foundation).
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/************************************************************
*
* This class handles an object's attributes.
* It creates a chain of object attributes.
*
************************************************************/

#ifndef SOFTHSM_SOFTATTRIBUTE_H
#define SOFTHSM_SOFTATTRIBUTE_H 1

class SoftAttribute {
  public:
    SoftAttribute();
    ~SoftAttribute();

    void addAttribute(CK_ATTRIBUTE *objectAttribute);
    CK_ATTRIBUTE* getAttribute(CK_ATTRIBUTE_TYPE type);
    CK_BBOOL matchAttribute(CK_ATTRIBUTE *attTemplate);

  private:
    SoftAttribute *next;
    CK_ATTRIBUTE *objectAttribute;
};

#endif /* SOFTHSM_SOFTATTRIBUTE_H */