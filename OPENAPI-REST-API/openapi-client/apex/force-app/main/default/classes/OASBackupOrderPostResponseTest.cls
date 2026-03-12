@isTest
private class OASBackupOrderPostResponseTest {
    @isTest
    private static void equalsSameInstance() {
        OASBackupOrderPostResponse backupOrderPostResponse1 = OASBackupOrderPostResponse.getExample();
        OASBackupOrderPostResponse backupOrderPostResponse2 = backupOrderPostResponse1;
        OASBackupOrderPostResponse backupOrderPostResponse3 = new OASBackupOrderPostResponse();
        OASBackupOrderPostResponse backupOrderPostResponse4 = backupOrderPostResponse3;

        System.assert(backupOrderPostResponse1.equals(backupOrderPostResponse2));
        System.assert(backupOrderPostResponse2.equals(backupOrderPostResponse1));
        System.assert(backupOrderPostResponse1.equals(backupOrderPostResponse1));
        System.assert(backupOrderPostResponse3.equals(backupOrderPostResponse4));
        System.assert(backupOrderPostResponse4.equals(backupOrderPostResponse3));
        System.assert(backupOrderPostResponse3.equals(backupOrderPostResponse3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASBackupOrderPostResponse backupOrderPostResponse1 = OASBackupOrderPostResponse.getExample();
        OASBackupOrderPostResponse backupOrderPostResponse2 = OASBackupOrderPostResponse.getExample();
        OASBackupOrderPostResponse backupOrderPostResponse3 = new OASBackupOrderPostResponse();
        OASBackupOrderPostResponse backupOrderPostResponse4 = new OASBackupOrderPostResponse();

        System.assert(backupOrderPostResponse1.equals(backupOrderPostResponse2));
        System.assert(backupOrderPostResponse2.equals(backupOrderPostResponse1));
        System.assert(backupOrderPostResponse3.equals(backupOrderPostResponse4));
        System.assert(backupOrderPostResponse4.equals(backupOrderPostResponse3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASBackupOrderPostResponse backupOrderPostResponse1 = OASBackupOrderPostResponse.getExample();
        OASBackupOrderPostResponse backupOrderPostResponse2 = new OASBackupOrderPostResponse();

        System.assertEquals(false, backupOrderPostResponse1.equals('foo'));
        System.assertEquals(false, backupOrderPostResponse2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASBackupOrderPostResponse backupOrderPostResponse1 = OASBackupOrderPostResponse.getExample();
        OASBackupOrderPostResponse backupOrderPostResponse2 = new OASBackupOrderPostResponse();
        OASBackupOrderPostResponse backupOrderPostResponse3;

        System.assertEquals(false, backupOrderPostResponse1.equals(backupOrderPostResponse3));
        System.assertEquals(false, backupOrderPostResponse2.equals(backupOrderPostResponse3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASBackupOrderPostResponse backupOrderPostResponse1 = OASBackupOrderPostResponse.getExample();
        OASBackupOrderPostResponse backupOrderPostResponse2 = new OASBackupOrderPostResponse();

        System.assertEquals(backupOrderPostResponse1.hashCode(), backupOrderPostResponse1.hashCode());
        System.assertEquals(backupOrderPostResponse2.hashCode(), backupOrderPostResponse2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASBackupOrderPostResponse backupOrderPostResponse1 = OASBackupOrderPostResponse.getExample();
        OASBackupOrderPostResponse backupOrderPostResponse2 = OASBackupOrderPostResponse.getExample();
        OASBackupOrderPostResponse backupOrderPostResponse3 = new OASBackupOrderPostResponse();
        OASBackupOrderPostResponse backupOrderPostResponse4 = new OASBackupOrderPostResponse();

        System.assert(backupOrderPostResponse1.equals(backupOrderPostResponse2));
        System.assert(backupOrderPostResponse3.equals(backupOrderPostResponse4));
        System.assertEquals(backupOrderPostResponse1.hashCode(), backupOrderPostResponse2.hashCode());
        System.assertEquals(backupOrderPostResponse3.hashCode(), backupOrderPostResponse4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASBackupOrderPostResponse backupOrderPostResponse = new OASBackupOrderPostResponse();
        Map<String, String> x-property-mappings = backupOrderPostResponse.getx-property-mappings();
        System.assertEquals('r_continue', x-property-mappings.get('continue'));
        System.assertEquals('totalCost', x-property-mappings.get('total_cost'));
        System.assertEquals('realIids', x-property-mappings.get('real_iids'));
        System.assertEquals('invoiceDescription', x-property-mappings.get('invoice_description'));
        System.assertEquals('cjParams', x-property-mappings.get('cj_params'));
    }

    @isTest
    private static void defaultValuesPopulated() {
        OASBackupOrderPostResponse backupOrderPostResponse = new OASBackupOrderPostResponse();
        System.assertEquals(new List<String>(), backupOrderPostResponse.errors);
        System.assertEquals(new List<String>(), backupOrderPostResponse.iids);
        System.assertEquals(new List<String>(), backupOrderPostResponse.realIids);
        System.assertEquals(null, backupOrderPostResponse.r_continue);
        System.assertEquals(null, backupOrderPostResponse.totalCost);
        System.assertEquals(null, backupOrderPostResponse.iid);
        System.assertEquals(null, backupOrderPostResponse.serviceId);
        System.assertEquals(null, backupOrderPostResponse.invoiceDescription);
        System.assertEquals(null, backupOrderPostResponse.cjParams);
    }
}
