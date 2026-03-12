@isTest
private class OASControlPanelTest {
    @isTest
    private static void equalsSameInstance() {
        OASControlPanel controlPanel1 = OASControlPanel.getExample();
        OASControlPanel controlPanel2 = controlPanel1;
        OASControlPanel controlPanel3 = new OASControlPanel();
        OASControlPanel controlPanel4 = controlPanel3;

        System.assert(controlPanel1.equals(controlPanel2));
        System.assert(controlPanel2.equals(controlPanel1));
        System.assert(controlPanel1.equals(controlPanel1));
        System.assert(controlPanel3.equals(controlPanel4));
        System.assert(controlPanel4.equals(controlPanel3));
        System.assert(controlPanel3.equals(controlPanel3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASControlPanel controlPanel1 = OASControlPanel.getExample();
        OASControlPanel controlPanel2 = OASControlPanel.getExample();
        OASControlPanel controlPanel3 = new OASControlPanel();
        OASControlPanel controlPanel4 = new OASControlPanel();

        System.assert(controlPanel1.equals(controlPanel2));
        System.assert(controlPanel2.equals(controlPanel1));
        System.assert(controlPanel3.equals(controlPanel4));
        System.assert(controlPanel4.equals(controlPanel3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASControlPanel controlPanel1 = OASControlPanel.getExample();
        OASControlPanel controlPanel2 = new OASControlPanel();

        System.assertEquals(false, controlPanel1.equals('foo'));
        System.assertEquals(false, controlPanel2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASControlPanel controlPanel1 = OASControlPanel.getExample();
        OASControlPanel controlPanel2 = new OASControlPanel();
        OASControlPanel controlPanel3;

        System.assertEquals(false, controlPanel1.equals(controlPanel3));
        System.assertEquals(false, controlPanel2.equals(controlPanel3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASControlPanel controlPanel1 = OASControlPanel.getExample();
        OASControlPanel controlPanel2 = new OASControlPanel();

        System.assertEquals(controlPanel1.hashCode(), controlPanel1.hashCode());
        System.assertEquals(controlPanel2.hashCode(), controlPanel2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASControlPanel controlPanel1 = OASControlPanel.getExample();
        OASControlPanel controlPanel2 = OASControlPanel.getExample();
        OASControlPanel controlPanel3 = new OASControlPanel();
        OASControlPanel controlPanel4 = new OASControlPanel();

        System.assert(controlPanel1.equals(controlPanel2));
        System.assert(controlPanel3.equals(controlPanel4));
        System.assertEquals(controlPanel1.hashCode(), controlPanel2.hashCode());
        System.assertEquals(controlPanel3.hashCode(), controlPanel4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASControlPanel controlPanel = new OASControlPanel();
        Map<String, String> x-property-mappings = controlPanel.getx-property-mappings();
        System.assertEquals('shortDesc', x-property-mappings.get('short_desc'));
        System.assertEquals('monthlyPrice', x-property-mappings.get('monthly_price'));
    }
}
