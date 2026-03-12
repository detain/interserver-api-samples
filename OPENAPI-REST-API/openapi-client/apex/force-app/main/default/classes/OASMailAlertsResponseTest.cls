@isTest
private class OASMailAlertsResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASMailAlertsResponse mailAlertsResponse1 = OASMailAlertsResponse.getExample();
        OASMailAlertsResponse mailAlertsResponse2 = mailAlertsResponse1;
        OASMailAlertsResponse mailAlertsResponse3 = new OASMailAlertsResponse();
        OASMailAlertsResponse mailAlertsResponse4 = mailAlertsResponse3;

        System.assert(mailAlertsResponse1.equals(mailAlertsResponse2));
        System.assert(mailAlertsResponse2.equals(mailAlertsResponse1));
        System.assert(mailAlertsResponse1.equals(mailAlertsResponse1));
        System.assert(mailAlertsResponse3.equals(mailAlertsResponse4));
        System.assert(mailAlertsResponse4.equals(mailAlertsResponse3));
        System.assert(mailAlertsResponse3.equals(mailAlertsResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASMailAlertsResponse mailAlertsResponse1 = OASMailAlertsResponse.getExample();
        OASMailAlertsResponse mailAlertsResponse2 = OASMailAlertsResponse.getExample();
        OASMailAlertsResponse mailAlertsResponse3 = new OASMailAlertsResponse();
        OASMailAlertsResponse mailAlertsResponse4 = new OASMailAlertsResponse();

        System.assert(mailAlertsResponse1.equals(mailAlertsResponse2));
        System.assert(mailAlertsResponse2.equals(mailAlertsResponse1));
        System.assert(mailAlertsResponse3.equals(mailAlertsResponse4));
        System.assert(mailAlertsResponse4.equals(mailAlertsResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASMailAlertsResponse mailAlertsResponse1 = OASMailAlertsResponse.getExample();
        OASMailAlertsResponse mailAlertsResponse2 = new OASMailAlertsResponse();

        System.assertEquals(false, mailAlertsResponse1.equals('foo'));
        System.assertEquals(false, mailAlertsResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASMailAlertsResponse mailAlertsResponse1 = OASMailAlertsResponse.getExample();
        OASMailAlertsResponse mailAlertsResponse2 = new OASMailAlertsResponse();
        OASMailAlertsResponse mailAlertsResponse3;

        System.assertEquals(false, mailAlertsResponse1.equals(mailAlertsResponse3));
        System.assertEquals(false, mailAlertsResponse2.equals(mailAlertsResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASMailAlertsResponse mailAlertsResponse1 = OASMailAlertsResponse.getExample();
        OASMailAlertsResponse mailAlertsResponse2 = new OASMailAlertsResponse();

        System.assertEquals(mailAlertsResponse1.hashCode(), mailAlertsResponse1.hashCode());
        System.assertEquals(mailAlertsResponse2.hashCode(), mailAlertsResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASMailAlertsResponse mailAlertsResponse1 = OASMailAlertsResponse.getExample();
        OASMailAlertsResponse mailAlertsResponse2 = OASMailAlertsResponse.getExample();
        OASMailAlertsResponse mailAlertsResponse3 = new OASMailAlertsResponse();
        OASMailAlertsResponse mailAlertsResponse4 = new OASMailAlertsResponse();

        System.assert(mailAlertsResponse1.equals(mailAlertsResponse2));
        System.assert(mailAlertsResponse3.equals(mailAlertsResponse4));
        System.assertEquals(mailAlertsResponse1.hashCode(), mailAlertsResponse2.hashCode());
        System.assertEquals(mailAlertsResponse3.hashCode(), mailAlertsResponse4.hashCode());
    }
}
