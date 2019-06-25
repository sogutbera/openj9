/*******************************************************************************
 * Copyright (c) 2017, 2018 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

package org.openj9.test.lambdatests;

import java.util.Comparator;

public class Test1 {

    public static String str1 = new String("testing123");
    
    public static void main(String[] args){
        Test2 tobj = new Test2();
        tobj.func();
        
        int x = 99;
        Comparator<String> stringComparatorLambda = (String o1, String o2) -> {
            return str1.compareTo(o1)+o1.compareTo(o2)+o2.compareTo(o1)+15+x;
        };
        int lambdaComparison = stringComparatorLambda.compare("world", "hello");
        System.out.println(lambdaComparison);

        Comparator<String> stringComparatorLambda2 = (String o1, String o2) -> {
            return str1.compareTo(o1)+o1.compareTo(o2)+o2.compareTo(o1)+42+x;
        };
        int lambdaComparison2 = stringComparatorLambda2.compare("qqqsdasfds", "dsfkopvwqp");
        System.out.println(lambdaComparison2);

        Comparator<String> stringComparatorLambda3 = (String o1, String o2) -> {
            return str1.compareTo(o1)+o1.compareTo(o2)+o2.compareTo(o1)+15+x;
        };
        int lambdaComparison3 = stringComparatorLambda3.compare("ojusoqm", "qiwpkd");
        System.out.println(lambdaComparison3);

        Comparator<String> stringComparatorLambda4 = (String o1, String o2) -> {
            return str1.compareTo(o1)+o1.compareTo(o2)+o2.compareTo(o1)+15+x;
        };
        int lambdaComparison4 = stringComparatorLambda4.compare("skxonqwi", "mcxkqwj");
        System.out.println(lambdaComparison4);

        Comparator<String> stringComparatorLambda5 = (String o1, String o2) -> {
            return str1.compareTo(o1)+o1.compareTo(o2)+o2.compareTo(o1)+15+x;
        };
        int lambdaComparison5 = stringComparatorLambda5.compare("qwjnd", "sdmka");
        System.out.println(lambdaComparison5);

        Comparator<String> stringComparatorLambda6 = (String o1, String o2) -> {
            return str1.compareTo(o1)+o1.compareTo(o2)+o2.compareTo(o1)+15+x;
        };
        int lambdaComparison6 = stringComparatorLambda6.compare("fdosofofsdkfe", "pdsfklaspl");
        System.out.println(lambdaComparison6);

        Comparator<String> stringComparatorLambda7 = (String o1, String o2) -> {
            return str1.compareTo(o1)+o1.compareTo(o2)+o2.compareTo(o1)+15+x;
        };
        int lambdaComparison7 = stringComparatorLambda7.compare("ksadmnfkas", "sdfjfs");
        System.out.println(lambdaComparison7);

        Comparator<String> stringComparatorLambda8 = (String o1, String o2) -> {
            return str1.compareTo(o1)+o1.compareTo(o2)+o2.compareTo(o1)+15+x;
        };
        int lambdaComparison8 = stringComparatorLambda8.compare("sdfjfsc", "zcxmlapq");
        System.out.println(lambdaComparison8);

        Comparator<String> stringComparatorLambda9 = (String o1, String o2) -> {
            return str1.compareTo(o1)+o1.compareTo(o2)+o2.compareTo(o1)+15+x;
        };
        int lambdaComparison9 = stringComparatorLambda9.compare("sdkfaq[]", "asjdfnvniww");
        System.out.println(lambdaComparison9);

        int y = 12345;
        Comparator<String> stringComparatorLambda10 = (String o1, String o2) -> {
            return 2+y+o2.compareTo(o1)+o1.compareTo(str1);
        };
        int lambdaComparison10 = stringComparatorLambda10.compare("###", "!!!");
        System.out.println(lambdaComparison10);
        
        System.out.println("Lambda test done!");
    }
}
