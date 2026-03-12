using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
  /// </summary>
  [DataContract]
  public class VpsServiceMaster {
    /// <summary>
    /// VPS ID
    /// </summary>
    /// <value>VPS ID</value>
    [DataMember(Name="vps_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_id")]
    public string VpsId { get; set; }

    /// <summary>
    /// VPS name
    /// </summary>
    /// <value>VPS name</value>
    [DataMember(Name="vps_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_name")]
    public string VpsName { get; set; }

    /// <summary>
    /// IP address of the VPS
    /// </summary>
    /// <value>IP address of the VPS</value>
    [DataMember(Name="vps_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_ip")]
    public string VpsIp { get; set; }

    /// <summary>
    /// VPS type
    /// </summary>
    /// <value>VPS type</value>
    [DataMember(Name="vps_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_type")]
    public string VpsType { get; set; }

    /// <summary>
    /// Hard drive size
    /// </summary>
    /// <value>Hard drive size</value>
    [DataMember(Name="vps_hdsize", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_hdsize")]
    public string VpsHdsize { get; set; }

    /// <summary>
    /// Free hard drive space
    /// </summary>
    /// <value>Free hard drive space</value>
    [DataMember(Name="vps_hdfree", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_hdfree")]
    public string VpsHdfree { get; set; }

    /// <summary>
    /// Bits
    /// </summary>
    /// <value>Bits</value>
    [DataMember(Name="vps_bits", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_bits")]
    public string VpsBits { get; set; }

    /// <summary>
    /// CPU load
    /// </summary>
    /// <value>CPU load</value>
    [DataMember(Name="vps_load", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_load")]
    public string VpsLoad { get; set; }

    /// <summary>
    /// RAM
    /// </summary>
    /// <value>RAM</value>
    [DataMember(Name="vps_ram", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_ram")]
    public string VpsRam { get; set; }

    /// <summary>
    /// CPU model
    /// </summary>
    /// <value>CPU model</value>
    [DataMember(Name="vps_cpu_model", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_cpu_model")]
    public string VpsCpuModel { get; set; }

    /// <summary>
    /// CPU frequency in MHz
    /// </summary>
    /// <value>CPU frequency in MHz</value>
    [DataMember(Name="vps_cpu_mhz", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_cpu_mhz")]
    public string VpsCpuMhz { get; set; }

    /// <summary>
    /// Location of the VPS
    /// </summary>
    /// <value>Location of the VPS</value>
    [DataMember(Name="vps_location", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_location")]
    public string VpsLocation { get; set; }

    /// <summary>
    /// Last update date
    /// </summary>
    /// <value>Last update date</value>
    [DataMember(Name="vps_last_update", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_last_update")]
    public string VpsLastUpdate { get; set; }

    /// <summary>
    /// RAID building status
    /// </summary>
    /// <value>RAID building status</value>
    [DataMember(Name="vps_raid_building", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_raid_building")]
    public string VpsRaidBuilding { get; set; }

    /// <summary>
    /// Kernel version
    /// </summary>
    /// <value>Kernel version</value>
    [DataMember(Name="vps_kernel", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_kernel")]
    public string VpsKernel { get; set; }

    /// <summary>
    /// Available
    /// </summary>
    /// <value>Available</value>
    [DataMember(Name="vps_available", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_available")]
    public string VpsAvailable { get; set; }

    /// <summary>
    /// Number of CPU cores
    /// </summary>
    /// <value>Number of CPU cores</value>
    [DataMember(Name="vps_cores", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_cores")]
    public string VpsCores { get; set; }

    /// <summary>
    /// I/O wait
    /// </summary>
    /// <value>I/O wait</value>
    [DataMember(Name="vps_iowait", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_iowait")]
    public string VpsIowait { get; set; }

    /// <summary>
    /// RAID status
    /// </summary>
    /// <value>RAID status</value>
    [DataMember(Name="vps_raid_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_raid_status")]
    public string VpsRaidStatus { get; set; }

    /// <summary>
    /// Mounts
    /// </summary>
    /// <value>Mounts</value>
    [DataMember(Name="vps_mounts", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_mounts")]
    public string VpsMounts { get; set; }

    /// <summary>
    /// Maximum number of servers
    /// </summary>
    /// <value>Maximum number of servers</value>
    [DataMember(Name="vps_server_max", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_server_max")]
    public string VpsServerMax { get; set; }

    /// <summary>
    /// Maximum number of server slices
    /// </summary>
    /// <value>Maximum number of server slices</value>
    [DataMember(Name="vps_server_max_slices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_server_max_slices")]
    public string VpsServerMaxSlices { get; set; }

    /// <summary>
    /// Drive type
    /// </summary>
    /// <value>Drive type</value>
    [DataMember(Name="vps_drive_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_drive_type")]
    public string VpsDriveType { get; set; }

    /// <summary>
    /// Order number
    /// </summary>
    /// <value>Order number</value>
    [DataMember(Name="vps_order", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vps_order")]
    public string VpsOrder { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsServiceMaster {\n");
      sb.Append("  VpsId: ").Append(VpsId).Append("\n");
      sb.Append("  VpsName: ").Append(VpsName).Append("\n");
      sb.Append("  VpsIp: ").Append(VpsIp).Append("\n");
      sb.Append("  VpsType: ").Append(VpsType).Append("\n");
      sb.Append("  VpsHdsize: ").Append(VpsHdsize).Append("\n");
      sb.Append("  VpsHdfree: ").Append(VpsHdfree).Append("\n");
      sb.Append("  VpsBits: ").Append(VpsBits).Append("\n");
      sb.Append("  VpsLoad: ").Append(VpsLoad).Append("\n");
      sb.Append("  VpsRam: ").Append(VpsRam).Append("\n");
      sb.Append("  VpsCpuModel: ").Append(VpsCpuModel).Append("\n");
      sb.Append("  VpsCpuMhz: ").Append(VpsCpuMhz).Append("\n");
      sb.Append("  VpsLocation: ").Append(VpsLocation).Append("\n");
      sb.Append("  VpsLastUpdate: ").Append(VpsLastUpdate).Append("\n");
      sb.Append("  VpsRaidBuilding: ").Append(VpsRaidBuilding).Append("\n");
      sb.Append("  VpsKernel: ").Append(VpsKernel).Append("\n");
      sb.Append("  VpsAvailable: ").Append(VpsAvailable).Append("\n");
      sb.Append("  VpsCores: ").Append(VpsCores).Append("\n");
      sb.Append("  VpsIowait: ").Append(VpsIowait).Append("\n");
      sb.Append("  VpsRaidStatus: ").Append(VpsRaidStatus).Append("\n");
      sb.Append("  VpsMounts: ").Append(VpsMounts).Append("\n");
      sb.Append("  VpsServerMax: ").Append(VpsServerMax).Append("\n");
      sb.Append("  VpsServerMaxSlices: ").Append(VpsServerMaxSlices).Append("\n");
      sb.Append("  VpsDriveType: ").Append(VpsDriveType).Append("\n");
      sb.Append("  VpsOrder: ").Append(VpsOrder).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }

    /// <summary>
    /// Get the JSON string presentation of the object
    /// </summary>
    /// <returns>JSON string presentation of the object</returns>
    public string ToJson() {
      return JsonConvert.SerializeObject(this, Formatting.Indented);
    }

}
}
