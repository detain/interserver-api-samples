@isTest
private class OASAccountInfoDataEmailSettingsTest {
    @isTest
    private static void equalsSameInstance() {
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings1 = OASAccountInfoDataEmailSettings.getExample();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings2 = accountInfoDataEmailSettings1;
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings3 = new OASAccountInfoDataEmailSettings();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings4 = accountInfoDataEmailSettings3;

        System.assert(accountInfoDataEmailSettings1.equals(accountInfoDataEmailSettings2));
        System.assert(accountInfoDataEmailSettings2.equals(accountInfoDataEmailSettings1));
        System.assert(accountInfoDataEmailSettings1.equals(accountInfoDataEmailSettings1));
        System.assert(accountInfoDataEmailSettings3.equals(accountInfoDataEmailSettings4));
        System.assert(accountInfoDataEmailSettings4.equals(accountInfoDataEmailSettings3));
        System.assert(accountInfoDataEmailSettings3.equals(accountInfoDataEmailSettings3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings1 = OASAccountInfoDataEmailSettings.getExample();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings2 = OASAccountInfoDataEmailSettings.getExample();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings3 = new OASAccountInfoDataEmailSettings();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings4 = new OASAccountInfoDataEmailSettings();

        System.assert(accountInfoDataEmailSettings1.equals(accountInfoDataEmailSettings2));
        System.assert(accountInfoDataEmailSettings2.equals(accountInfoDataEmailSettings1));
        System.assert(accountInfoDataEmailSettings3.equals(accountInfoDataEmailSettings4));
        System.assert(accountInfoDataEmailSettings4.equals(accountInfoDataEmailSettings3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings1 = OASAccountInfoDataEmailSettings.getExample();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings2 = new OASAccountInfoDataEmailSettings();

        System.assertEquals(false, accountInfoDataEmailSettings1.equals('foo'));
        System.assertEquals(false, accountInfoDataEmailSettings2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings1 = OASAccountInfoDataEmailSettings.getExample();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings2 = new OASAccountInfoDataEmailSettings();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings3;

        System.assertEquals(false, accountInfoDataEmailSettings1.equals(accountInfoDataEmailSettings3));
        System.assertEquals(false, accountInfoDataEmailSettings2.equals(accountInfoDataEmailSettings3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings1 = OASAccountInfoDataEmailSettings.getExample();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings2 = new OASAccountInfoDataEmailSettings();

        System.assertEquals(accountInfoDataEmailSettings1.hashCode(), accountInfoDataEmailSettings1.hashCode());
        System.assertEquals(accountInfoDataEmailSettings2.hashCode(), accountInfoDataEmailSettings2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings1 = OASAccountInfoDataEmailSettings.getExample();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings2 = OASAccountInfoDataEmailSettings.getExample();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings3 = new OASAccountInfoDataEmailSettings();
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings4 = new OASAccountInfoDataEmailSettings();

        System.assert(accountInfoDataEmailSettings1.equals(accountInfoDataEmailSettings2));
        System.assert(accountInfoDataEmailSettings3.equals(accountInfoDataEmailSettings4));
        System.assertEquals(accountInfoDataEmailSettings1.hashCode(), accountInfoDataEmailSettings2.hashCode());
        System.assertEquals(accountInfoDataEmailSettings3.hashCode(), accountInfoDataEmailSettings4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASAccountInfoDataEmailSettings accountInfoDataEmailSettings = new OASAccountInfoDataEmailSettings();
        Map<String, String> x-property-mappings = accountInfoDataEmailSettings.getx-property-mappings();
        System.assertEquals('adminCcBadResponse', x-property-mappings.get('admin/cc_bad_response'));
        System.assertEquals('adminMassCommunicationsTpl', x-property-mappings.get('admin/mass_communications.tpl'));
    }
}
