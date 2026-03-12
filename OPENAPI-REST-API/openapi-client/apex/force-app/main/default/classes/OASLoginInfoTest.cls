@isTest
private class OASLoginInfoTest {
    @isTest
    private static void equalsSameInstance() {
        OASLoginInfo loginInfo1 = OASLoginInfo.getExample();
        OASLoginInfo loginInfo2 = loginInfo1;
        OASLoginInfo loginInfo3 = new OASLoginInfo();
        OASLoginInfo loginInfo4 = loginInfo3;

        System.assert(loginInfo1.equals(loginInfo2));
        System.assert(loginInfo2.equals(loginInfo1));
        System.assert(loginInfo1.equals(loginInfo1));
        System.assert(loginInfo3.equals(loginInfo4));
        System.assert(loginInfo4.equals(loginInfo3));
        System.assert(loginInfo3.equals(loginInfo3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASLoginInfo loginInfo1 = OASLoginInfo.getExample();
        OASLoginInfo loginInfo2 = OASLoginInfo.getExample();
        OASLoginInfo loginInfo3 = new OASLoginInfo();
        OASLoginInfo loginInfo4 = new OASLoginInfo();

        System.assert(loginInfo1.equals(loginInfo2));
        System.assert(loginInfo2.equals(loginInfo1));
        System.assert(loginInfo3.equals(loginInfo4));
        System.assert(loginInfo4.equals(loginInfo3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASLoginInfo loginInfo1 = OASLoginInfo.getExample();
        OASLoginInfo loginInfo2 = new OASLoginInfo();

        System.assertEquals(false, loginInfo1.equals('foo'));
        System.assertEquals(false, loginInfo2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASLoginInfo loginInfo1 = OASLoginInfo.getExample();
        OASLoginInfo loginInfo2 = new OASLoginInfo();
        OASLoginInfo loginInfo3;

        System.assertEquals(false, loginInfo1.equals(loginInfo3));
        System.assertEquals(false, loginInfo2.equals(loginInfo3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASLoginInfo loginInfo1 = OASLoginInfo.getExample();
        OASLoginInfo loginInfo2 = new OASLoginInfo();

        System.assertEquals(loginInfo1.hashCode(), loginInfo1.hashCode());
        System.assertEquals(loginInfo2.hashCode(), loginInfo2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASLoginInfo loginInfo1 = OASLoginInfo.getExample();
        OASLoginInfo loginInfo2 = OASLoginInfo.getExample();
        OASLoginInfo loginInfo3 = new OASLoginInfo();
        OASLoginInfo loginInfo4 = new OASLoginInfo();

        System.assert(loginInfo1.equals(loginInfo2));
        System.assert(loginInfo3.equals(loginInfo4));
        System.assertEquals(loginInfo1.hashCode(), loginInfo2.hashCode());
        System.assertEquals(loginInfo3.hashCode(), loginInfo4.hashCode());
    }
}
