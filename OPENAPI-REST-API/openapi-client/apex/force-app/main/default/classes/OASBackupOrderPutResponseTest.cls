@isTest
private class OASBackupOrderPutResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupOrderPutResponse backupOrderPutResponse1 = OASBackupOrderPutResponse.getExample();
        OASBackupOrderPutResponse backupOrderPutResponse2 = backupOrderPutResponse1;
        OASBackupOrderPutResponse backupOrderPutResponse3 = new OASBackupOrderPutResponse();
        OASBackupOrderPutResponse backupOrderPutResponse4 = backupOrderPutResponse3;

        System.assert(backupOrderPutResponse1.equals(backupOrderPutResponse2));
        System.assert(backupOrderPutResponse2.equals(backupOrderPutResponse1));
        System.assert(backupOrderPutResponse1.equals(backupOrderPutResponse1));
        System.assert(backupOrderPutResponse3.equals(backupOrderPutResponse4));
        System.assert(backupOrderPutResponse4.equals(backupOrderPutResponse3));
        System.assert(backupOrderPutResponse3.equals(backupOrderPutResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupOrderPutResponse backupOrderPutResponse1 = OASBackupOrderPutResponse.getExample();
        OASBackupOrderPutResponse backupOrderPutResponse2 = OASBackupOrderPutResponse.getExample();
        OASBackupOrderPutResponse backupOrderPutResponse3 = new OASBackupOrderPutResponse();
        OASBackupOrderPutResponse backupOrderPutResponse4 = new OASBackupOrderPutResponse();

        System.assert(backupOrderPutResponse1.equals(backupOrderPutResponse2));
        System.assert(backupOrderPutResponse2.equals(backupOrderPutResponse1));
        System.assert(backupOrderPutResponse3.equals(backupOrderPutResponse4));
        System.assert(backupOrderPutResponse4.equals(backupOrderPutResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupOrderPutResponse backupOrderPutResponse1 = OASBackupOrderPutResponse.getExample();
        OASBackupOrderPutResponse backupOrderPutResponse2 = new OASBackupOrderPutResponse();

        System.assertEquals(false, backupOrderPutResponse1.equals('foo'));
        System.assertEquals(false, backupOrderPutResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupOrderPutResponse backupOrderPutResponse1 = OASBackupOrderPutResponse.getExample();
        OASBackupOrderPutResponse backupOrderPutResponse2 = new OASBackupOrderPutResponse();
        OASBackupOrderPutResponse backupOrderPutResponse3;

        System.assertEquals(false, backupOrderPutResponse1.equals(backupOrderPutResponse3));
        System.assertEquals(false, backupOrderPutResponse2.equals(backupOrderPutResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupOrderPutResponse backupOrderPutResponse1 = OASBackupOrderPutResponse.getExample();
        OASBackupOrderPutResponse backupOrderPutResponse2 = new OASBackupOrderPutResponse();

        System.assertEquals(backupOrderPutResponse1.hashCode(), backupOrderPutResponse1.hashCode());
        System.assertEquals(backupOrderPutResponse2.hashCode(), backupOrderPutResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupOrderPutResponse backupOrderPutResponse1 = OASBackupOrderPutResponse.getExample();
        OASBackupOrderPutResponse backupOrderPutResponse2 = OASBackupOrderPutResponse.getExample();
        OASBackupOrderPutResponse backupOrderPutResponse3 = new OASBackupOrderPutResponse();
        OASBackupOrderPutResponse backupOrderPutResponse4 = new OASBackupOrderPutResponse();

        System.assert(backupOrderPutResponse1.equals(backupOrderPutResponse2));
        System.assert(backupOrderPutResponse3.equals(backupOrderPutResponse4));
        System.assertEquals(backupOrderPutResponse1.hashCode(), backupOrderPutResponse2.hashCode());
        System.assertEquals(backupOrderPutResponse3.hashCode(), backupOrderPutResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackupOrderPutResponse backupOrderPutResponse = new OASBackupOrderPutResponse();
        Map<String, String> x-property-mappings = backupOrderPutResponse.getx-property-mappings();
        System.assertEquals('r_continue', x-property-mappings.get('continue'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASBackupOrderPutResponse backupOrderPutResponse = new OASBackupOrderPutResponse();
        System.assertEquals(new List<String>(), backupOrderPutResponse.errors);
        System.assertEquals(null, backupOrderPutResponse.r_continue);
        System.assertEquals(null, backupOrderPutResponse.serviceType);
        System.assertEquals(null, backupOrderPutResponse.serviceCost);
        System.assertEquals(null, backupOrderPutResponse.originalCost);
        System.assertEquals(null, backupOrderPutResponse.repeatServiceCost);
        System.assertEquals(null, backupOrderPutResponse.hostname);
        System.assertEquals(null, backupOrderPutResponse.password);
        System.assertEquals(null, backupOrderPutResponse.coupon);
        System.assertEquals(null, backupOrderPutResponse.couponCode);
    }
}
