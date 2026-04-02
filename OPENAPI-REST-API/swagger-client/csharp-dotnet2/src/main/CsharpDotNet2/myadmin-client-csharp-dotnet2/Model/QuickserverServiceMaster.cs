using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Information about the host node running this QuickServer, including hardware specs and resource utilization.
  /// </summary>
  [DataContract]
  public class QuickserverServiceMaster {
    /// <summary>
    /// Quickserver ID
    /// </summary>
    /// <value>Quickserver ID</value>
    [DataMember(Name="qs_id", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_id")]
    public string QsId { get; set; }

    /// <summary>
    /// Quickserver name
    /// </summary>
    /// <value>Quickserver name</value>
    [DataMember(Name="qs_name", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_name")]
    public string QsName { get; set; }

    /// <summary>
    /// IP address
    /// </summary>
    /// <value>IP address</value>
    [DataMember(Name="qs_ip", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_ip")]
    public string QsIp { get; set; }

    /// <summary>
    /// Type
    /// </summary>
    /// <value>Type</value>
    [DataMember(Name="qs_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_type")]
    public string QsType { get; set; }

    /// <summary>
    /// HDD size
    /// </summary>
    /// <value>HDD size</value>
    [DataMember(Name="qs_hdsize", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_hdsize")]
    public string QsHdsize { get; set; }

    /// <summary>
    /// Free HDD space
    /// </summary>
    /// <value>Free HDD space</value>
    [DataMember(Name="qs_hdfree", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_hdfree")]
    public string QsHdfree { get; set; }

    /// <summary>
    /// Bits
    /// </summary>
    /// <value>Bits</value>
    [DataMember(Name="qs_bits", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_bits")]
    public string QsBits { get; set; }

    /// <summary>
    /// Load
    /// </summary>
    /// <value>Load</value>
    [DataMember(Name="qs_load", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_load")]
    public string QsLoad { get; set; }

    /// <summary>
    /// RAM information
    /// </summary>
    /// <value>RAM information</value>
    [DataMember(Name="qs_ram", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_ram")]
    public string QsRam { get; set; }

    /// <summary>
    /// CPU model
    /// </summary>
    /// <value>CPU model</value>
    [DataMember(Name="qs_cpu_model", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_cpu_model")]
    public string QsCpuModel { get; set; }

    /// <summary>
    /// CPU frequency
    /// </summary>
    /// <value>CPU frequency</value>
    [DataMember(Name="qs_cpu_mhz", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_cpu_mhz")]
    public string QsCpuMhz { get; set; }

    /// <summary>
    /// Location
    /// </summary>
    /// <value>Location</value>
    [DataMember(Name="qs_location", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_location")]
    public string QsLocation { get; set; }

    /// <summary>
    /// Available information
    /// </summary>
    /// <value>Available information</value>
    [DataMember(Name="qs_available", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_available")]
    public string QsAvailable { get; set; }

    /// <summary>
    /// Cost
    /// </summary>
    /// <value>Cost</value>
    [DataMember(Name="qs_cost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_cost")]
    public string QsCost { get; set; }

    /// <summary>
    /// Last update date
    /// </summary>
    /// <value>Last update date</value>
    [DataMember(Name="qs_last_update", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_last_update")]
    public string QsLastUpdate { get; set; }

    /// <summary>
    /// Number of cores
    /// </summary>
    /// <value>Number of cores</value>
    [DataMember(Name="qs_cores", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_cores")]
    public string QsCores { get; set; }

    /// <summary>
    /// I/O wait
    /// </summary>
    /// <value>I/O wait</value>
    [DataMember(Name="qs_iowait", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_iowait")]
    public string QsIowait { get; set; }

    /// <summary>
    /// RAID status
    /// </summary>
    /// <value>RAID status</value>
    [DataMember(Name="qs_raid_status", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_raid_status")]
    public string QsRaidStatus { get; set; }

    /// <summary>
    /// Drive type
    /// </summary>
    /// <value>Drive type</value>
    [DataMember(Name="qs_drive_type", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_drive_type")]
    public string QsDriveType { get; set; }

    /// <summary>
    /// Order number
    /// </summary>
    /// <value>Order number</value>
    [DataMember(Name="qs_order", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_order")]
    public string QsOrder { get; set; }

    /// <summary>
    /// RAID building information
    /// </summary>
    /// <value>RAID building information</value>
    [DataMember(Name="qs_raid_building", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_raid_building")]
    public string QsRaidBuilding { get; set; }

    /// <summary>
    /// Kernel version
    /// </summary>
    /// <value>Kernel version</value>
    [DataMember(Name="qs_kernel", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_kernel")]
    public string QsKernel { get; set; }

    /// <summary>
    /// IOPing information
    /// </summary>
    /// <value>IOPing information</value>
    [DataMember(Name="qs_ioping", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_ioping")]
    public string QsIoping { get; set; }

    /// <summary>
    /// Speed information
    /// </summary>
    /// <value>Speed information</value>
    [DataMember(Name="qs_speed", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_speed")]
    public string QsSpeed { get; set; }

    /// <summary>
    /// Distribution name
    /// </summary>
    /// <value>Distribution name</value>
    [DataMember(Name="qs_distro", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_distro")]
    public string QsDistro { get; set; }

    /// <summary>
    /// Distribution version
    /// </summary>
    /// <value>Distribution version</value>
    [DataMember(Name="qs_distro_version", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_distro_version")]
    public string QsDistroVersion { get; set; }

    /// <summary>
    /// Bytes/sec in
    /// </summary>
    /// <value>Bytes/sec in</value>
    [DataMember(Name="qs_bytes_sec_in", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_bytes_sec_in")]
    public string QsBytesSecIn { get; set; }

    /// <summary>
    /// Bytes/sec out
    /// </summary>
    /// <value>Bytes/sec out</value>
    [DataMember(Name="qs_bytes_sec_out", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_bytes_sec_out")]
    public string QsBytesSecOut { get; set; }

    /// <summary>
    /// Packets/sec in
    /// </summary>
    /// <value>Packets/sec in</value>
    [DataMember(Name="qs_packets_sec_in", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_packets_sec_in")]
    public string QsPacketsSecIn { get; set; }

    /// <summary>
    /// Packets/sec out
    /// </summary>
    /// <value>Packets/sec out</value>
    [DataMember(Name="qs_packets_sec_out", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_packets_sec_out")]
    public string QsPacketsSecOut { get; set; }

    /// <summary>
    /// Last install time (null)
    /// </summary>
    /// <value>Last install time (null)</value>
    [DataMember(Name="qs_last_install_time", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_last_install_time")]
    public string QsLastInstallTime { get; set; }

    /// <summary>
    /// Partitions information (null)
    /// </summary>
    /// <value>Partitions information (null)</value>
    [DataMember(Name="qs_partitions", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_partitions")]
    public string QsPartitions { get; set; }

    /// <summary>
    /// CPU flags
    /// </summary>
    /// <value>CPU flags</value>
    [DataMember(Name="qs_cpu_flags", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "qs_cpu_flags")]
    public string QsCpuFlags { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class QuickserverServiceMaster {\n");
      sb.Append("  QsId: ").Append(QsId).Append("\n");
      sb.Append("  QsName: ").Append(QsName).Append("\n");
      sb.Append("  QsIp: ").Append(QsIp).Append("\n");
      sb.Append("  QsType: ").Append(QsType).Append("\n");
      sb.Append("  QsHdsize: ").Append(QsHdsize).Append("\n");
      sb.Append("  QsHdfree: ").Append(QsHdfree).Append("\n");
      sb.Append("  QsBits: ").Append(QsBits).Append("\n");
      sb.Append("  QsLoad: ").Append(QsLoad).Append("\n");
      sb.Append("  QsRam: ").Append(QsRam).Append("\n");
      sb.Append("  QsCpuModel: ").Append(QsCpuModel).Append("\n");
      sb.Append("  QsCpuMhz: ").Append(QsCpuMhz).Append("\n");
      sb.Append("  QsLocation: ").Append(QsLocation).Append("\n");
      sb.Append("  QsAvailable: ").Append(QsAvailable).Append("\n");
      sb.Append("  QsCost: ").Append(QsCost).Append("\n");
      sb.Append("  QsLastUpdate: ").Append(QsLastUpdate).Append("\n");
      sb.Append("  QsCores: ").Append(QsCores).Append("\n");
      sb.Append("  QsIowait: ").Append(QsIowait).Append("\n");
      sb.Append("  QsRaidStatus: ").Append(QsRaidStatus).Append("\n");
      sb.Append("  QsDriveType: ").Append(QsDriveType).Append("\n");
      sb.Append("  QsOrder: ").Append(QsOrder).Append("\n");
      sb.Append("  QsRaidBuilding: ").Append(QsRaidBuilding).Append("\n");
      sb.Append("  QsKernel: ").Append(QsKernel).Append("\n");
      sb.Append("  QsIoping: ").Append(QsIoping).Append("\n");
      sb.Append("  QsSpeed: ").Append(QsSpeed).Append("\n");
      sb.Append("  QsDistro: ").Append(QsDistro).Append("\n");
      sb.Append("  QsDistroVersion: ").Append(QsDistroVersion).Append("\n");
      sb.Append("  QsBytesSecIn: ").Append(QsBytesSecIn).Append("\n");
      sb.Append("  QsBytesSecOut: ").Append(QsBytesSecOut).Append("\n");
      sb.Append("  QsPacketsSecIn: ").Append(QsPacketsSecIn).Append("\n");
      sb.Append("  QsPacketsSecOut: ").Append(QsPacketsSecOut).Append("\n");
      sb.Append("  QsLastInstallTime: ").Append(QsLastInstallTime).Append("\n");
      sb.Append("  QsPartitions: ").Append(QsPartitions).Append("\n");
      sb.Append("  QsCpuFlags: ").Append(QsCpuFlags).Append("\n");
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
