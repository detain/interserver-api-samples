@isTest
private class OASVpsServiceMasterTest {
    @isTest
    private static void equalsSameInstance() {
        OASVpsServiceMaster vpsServiceMaster1 = OASVpsServiceMaster.getExample();
        OASVpsServiceMaster vpsServiceMaster2 = vpsServiceMaster1;
        OASVpsServiceMaster vpsServiceMaster3 = new OASVpsServiceMaster();
        OASVpsServiceMaster vpsServiceMaster4 = vpsServiceMaster3;

        System.assert(vpsServiceMaster1.equals(vpsServiceMaster2));
        System.assert(vpsServiceMaster2.equals(vpsServiceMaster1));
        System.assert(vpsServiceMaster1.equals(vpsServiceMaster1));
        System.assert(vpsServiceMaster3.equals(vpsServiceMaster4));
        System.assert(vpsServiceMaster4.equals(vpsServiceMaster3));
        System.assert(vpsServiceMaster3.equals(vpsServiceMaster3));
    }

    @isTest
    private static void equalsIdenticalInstance() {
        OASVpsServiceMaster vpsServiceMaster1 = OASVpsServiceMaster.getExample();
        OASVpsServiceMaster vpsServiceMaster2 = OASVpsServiceMaster.getExample();
        OASVpsServiceMaster vpsServiceMaster3 = new OASVpsServiceMaster();
        OASVpsServiceMaster vpsServiceMaster4 = new OASVpsServiceMaster();

        System.assert(vpsServiceMaster1.equals(vpsServiceMaster2));
        System.assert(vpsServiceMaster2.equals(vpsServiceMaster1));
        System.assert(vpsServiceMaster3.equals(vpsServiceMaster4));
        System.assert(vpsServiceMaster4.equals(vpsServiceMaster3));
    }

    @isTest
    private static void notEqualsDifferentType() {
        OASVpsServiceMaster vpsServiceMaster1 = OASVpsServiceMaster.getExample();
        OASVpsServiceMaster vpsServiceMaster2 = new OASVpsServiceMaster();

        System.assertEquals(false, vpsServiceMaster1.equals('foo'));
        System.assertEquals(false, vpsServiceMaster2.equals('foo'));
    }

    @isTest
    private static void notEqualsNull() {
        OASVpsServiceMaster vpsServiceMaster1 = OASVpsServiceMaster.getExample();
        OASVpsServiceMaster vpsServiceMaster2 = new OASVpsServiceMaster();
        OASVpsServiceMaster vpsServiceMaster3;

        System.assertEquals(false, vpsServiceMaster1.equals(vpsServiceMaster3));
        System.assertEquals(false, vpsServiceMaster2.equals(vpsServiceMaster3));
    }

    @isTest
    private static void consistentHashCodeValue() {
        OASVpsServiceMaster vpsServiceMaster1 = OASVpsServiceMaster.getExample();
        OASVpsServiceMaster vpsServiceMaster2 = new OASVpsServiceMaster();

        System.assertEquals(vpsServiceMaster1.hashCode(), vpsServiceMaster1.hashCode());
        System.assertEquals(vpsServiceMaster2.hashCode(), vpsServiceMaster2.hashCode());
    }

    @isTest
    private static void equalInstancesHaveSameHashCode() {
        OASVpsServiceMaster vpsServiceMaster1 = OASVpsServiceMaster.getExample();
        OASVpsServiceMaster vpsServiceMaster2 = OASVpsServiceMaster.getExample();
        OASVpsServiceMaster vpsServiceMaster3 = new OASVpsServiceMaster();
        OASVpsServiceMaster vpsServiceMaster4 = new OASVpsServiceMaster();

        System.assert(vpsServiceMaster1.equals(vpsServiceMaster2));
        System.assert(vpsServiceMaster3.equals(vpsServiceMaster4));
        System.assertEquals(vpsServiceMaster1.hashCode(), vpsServiceMaster2.hashCode());
        System.assertEquals(vpsServiceMaster3.hashCode(), vpsServiceMaster4.hashCode());
    }

    @isTest
    private static void maintainRenamedProperties() {
        OASVpsServiceMaster vpsServiceMaster = new OASVpsServiceMaster();
        Map<String, String> x-property-mappings = vpsServiceMaster.getx-property-mappings();
        System.assertEquals('vpsId', x-property-mappings.get('vps_id'));
        System.assertEquals('vpsName', x-property-mappings.get('vps_name'));
        System.assertEquals('vpsIp', x-property-mappings.get('vps_ip'));
        System.assertEquals('vpsType', x-property-mappings.get('vps_type'));
        System.assertEquals('vpsHdsize', x-property-mappings.get('vps_hdsize'));
        System.assertEquals('vpsHdfree', x-property-mappings.get('vps_hdfree'));
        System.assertEquals('vpsBits', x-property-mappings.get('vps_bits'));
        System.assertEquals('vpsLoad', x-property-mappings.get('vps_load'));
        System.assertEquals('vpsRam', x-property-mappings.get('vps_ram'));
        System.assertEquals('vpsCpuModel', x-property-mappings.get('vps_cpu_model'));
        System.assertEquals('vpsCpuMhz', x-property-mappings.get('vps_cpu_mhz'));
        System.assertEquals('vpsLocation', x-property-mappings.get('vps_location'));
        System.assertEquals('vpsLastUpdate', x-property-mappings.get('vps_last_update'));
        System.assertEquals('vpsRaidBuilding', x-property-mappings.get('vps_raid_building'));
        System.assertEquals('vpsKernel', x-property-mappings.get('vps_kernel'));
        System.assertEquals('vpsAvailable', x-property-mappings.get('vps_available'));
        System.assertEquals('vpsCores', x-property-mappings.get('vps_cores'));
        System.assertEquals('vpsIowait', x-property-mappings.get('vps_iowait'));
        System.assertEquals('vpsRaidStatus', x-property-mappings.get('vps_raid_status'));
        System.assertEquals('vpsMounts', x-property-mappings.get('vps_mounts'));
        System.assertEquals('vpsServerMax', x-property-mappings.get('vps_server_max'));
        System.assertEquals('vpsServerMaxSlices', x-property-mappings.get('vps_server_max_slices'));
        System.assertEquals('vpsDriveType', x-property-mappings.get('vps_drive_type'));
        System.assertEquals('vpsOrder', x-property-mappings.get('vps_order'));
    }
}
