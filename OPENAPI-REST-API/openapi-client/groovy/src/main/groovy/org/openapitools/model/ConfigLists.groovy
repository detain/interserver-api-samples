package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import org.openapitools.model.Bandwidth;
import org.openapitools.model.ControlPanel;
import org.openapitools.model.Cpu;
import org.openapitools.model.HardDrive;
import org.openapitools.model.IpBlock;
import org.openapitools.model.MemoryOption;
import org.openapitools.model.OperatingSystem;
import org.openapitools.model.RaidOption;

@Canonical
class ConfigLists {
    
    Map<String, Cpu> cpuLi = new HashMap<>()
    
    Map<String, Map<String, MemoryOption>> memoryLi = new HashMap<>()
    
    Map<String, Map<String, HardDrive>> hdLi = new HashMap<>()
    
    Map<String, Bandwidth> bandwidthLi = new HashMap<>()
    
    Map<String, IpBlock> ipsLi = new HashMap<>()
    
    Map<String, OperatingSystem> osLi = new HashMap<>()
    
    Map<String, ControlPanel> cpLi = new HashMap<>()
    
    List<RaidOption> raidLi = new ArrayList<>()
}
