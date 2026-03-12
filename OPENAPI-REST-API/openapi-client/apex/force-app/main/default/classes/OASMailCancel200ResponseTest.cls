@isTest
private class OASMailCancel200ResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailCancel200Response mailCancel200Response1 = OASMailCancel200Response.getExample();
        OASMailCancel200Response mailCancel200Response2 = mailCancel200Response1;
        OASMailCancel200Response mailCancel200Response3 = new OASMailCancel200Response();
        OASMailCancel200Response mailCancel200Response4 = mailCancel200Response3;

        System.assert(mailCancel200Response1.equals(mailCancel200Response2));
        System.assert(mailCancel200Response2.equals(mailCancel200Response1));
        System.assert(mailCancel200Response1.equals(mailCancel200Response1));
        System.assert(mailCancel200Response3.equals(mailCancel200Response4));
        System.assert(mailCancel200Response4.equals(mailCancel200Response3));
        System.assert(mailCancel200Response3.equals(mailCancel200Response3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailCancel200Response mailCancel200Response1 = OASMailCancel200Response.getExample();
        OASMailCancel200Response mailCancel200Response2 = OASMailCancel200Response.getExample();
        OASMailCancel200Response mailCancel200Response3 = new OASMailCancel200Response();
        OASMailCancel200Response mailCancel200Response4 = new OASMailCancel200Response();

        System.assert(mailCancel200Response1.equals(mailCancel200Response2));
        System.assert(mailCancel200Response2.equals(mailCancel200Response1));
        System.assert(mailCancel200Response3.equals(mailCancel200Response4));
        System.assert(mailCancel200Response4.equals(mailCancel200Response3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailCancel200Response mailCancel200Response1 = OASMailCancel200Response.getExample();
        OASMailCancel200Response mailCancel200Response2 = new OASMailCancel200Response();

        System.assertEquals(false, mailCancel200Response1.equals('foo'));
        System.assertEquals(false, mailCancel200Response2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailCancel200Response mailCancel200Response1 = OASMailCancel200Response.getExample();
        OASMailCancel200Response mailCancel200Response2 = new OASMailCancel200Response();
        OASMailCancel200Response mailCancel200Response3;

        System.assertEquals(false, mailCancel200Response1.equals(mailCancel200Response3));
        System.assertEquals(false, mailCancel200Response2.equals(mailCancel200Response3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailCancel200Response mailCancel200Response1 = OASMailCancel200Response.getExample();
        OASMailCancel200Response mailCancel200Response2 = new OASMailCancel200Response();

        System.assertEquals(mailCancel200Response1.hashCode(), mailCancel200Response1.hashCode());
        System.assertEquals(mailCancel200Response2.hashCode(), mailCancel200Response2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailCancel200Response mailCancel200Response1 = OASMailCancel200Response.getExample();
        OASMailCancel200Response mailCancel200Response2 = OASMailCancel200Response.getExample();
        OASMailCancel200Response mailCancel200Response3 = new OASMailCancel200Response();
        OASMailCancel200Response mailCancel200Response4 = new OASMailCancel200Response();

        System.assert(mailCancel200Response1.equals(mailCancel200Response2));
        System.assert(mailCancel200Response3.equals(mailCancel200Response4));
        System.assertEquals(mailCancel200Response1.hashCode(), mailCancel200Response2.hashCode());
        System.assertEquals(mailCancel200Response3.hashCode(), mailCancel200Response4.hashCode());
    }
}
