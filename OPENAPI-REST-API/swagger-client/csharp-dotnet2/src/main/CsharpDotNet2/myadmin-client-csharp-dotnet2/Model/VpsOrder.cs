using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
  /// </summary>
  [DataContract]
  public class VpsOrder {
    /// <summary>
    /// Cost of VPS Slice SSD OVZ
    /// </summary>
    /// <value>Cost of VPS Slice SSD OVZ</value>
    [DataMember(Name="vpsSliceSsdOvzCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceSsdOvzCost")]
    public decimal? VpsSliceSsdOvzCost { get; set; }

    /// <summary>
    /// Cost of VPS Slice OVZ
    /// </summary>
    /// <value>Cost of VPS Slice OVZ</value>
    [DataMember(Name="vpsSliceOvzCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceOvzCost")]
    public decimal? VpsSliceOvzCost { get; set; }

    /// <summary>
    /// Cost of VPS Slice SSD Virtuozzo
    /// </summary>
    /// <value>Cost of VPS Slice SSD Virtuozzo</value>
    [DataMember(Name="vpsSliceSsdVirtuozzoCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceSsdVirtuozzoCost")]
    public decimal? VpsSliceSsdVirtuozzoCost { get; set; }

    /// <summary>
    /// Cost of VPS Slice Virtuozzo
    /// </summary>
    /// <value>Cost of VPS Slice Virtuozzo</value>
    [DataMember(Name="vpsSliceVirtuozzoCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceVirtuozzoCost")]
    public decimal? VpsSliceVirtuozzoCost { get; set; }

    /// <summary>
    /// Cost of VPS Slice HyperV
    /// </summary>
    /// <value>Cost of VPS Slice HyperV</value>
    [DataMember(Name="vpsSliceHypervCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceHypervCost")]
    public decimal? VpsSliceHypervCost { get; set; }

    /// <summary>
    /// Cost of VPS Slice VMware
    /// </summary>
    /// <value>Cost of VPS Slice VMware</value>
    [DataMember(Name="vpsSliceVmwareCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceVmwareCost")]
    public decimal? VpsSliceVmwareCost { get; set; }

    /// <summary>
    /// Cost of VPS Slice LXC
    /// </summary>
    /// <value>Cost of VPS Slice LXC</value>
    [DataMember(Name="vpsSliceLxcCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceLxcCost")]
    public decimal? VpsSliceLxcCost { get; set; }

    /// <summary>
    /// Cost of VPS Slice Xen
    /// </summary>
    /// <value>Cost of VPS Slice Xen</value>
    [DataMember(Name="vpsSliceXenCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceXenCost")]
    public decimal? VpsSliceXenCost { get; set; }

    /// <summary>
    /// Cost of VPS Slice KVM L
    /// </summary>
    /// <value>Cost of VPS Slice KVM L</value>
    [DataMember(Name="vpsSliceKvmLCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceKvmLCost")]
    public decimal? VpsSliceKvmLCost { get; set; }

    /// <summary>
    /// Cost of VPS Slice KVM Storage
    /// </summary>
    /// <value>Cost of VPS Slice KVM Storage</value>
    [DataMember(Name="vpsSliceKvmStorageCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceKvmStorageCost")]
    public decimal? VpsSliceKvmStorageCost { get; set; }

    /// <summary>
    /// Cost of VPS in NY
    /// </summary>
    /// <value>Cost of VPS in NY</value>
    [DataMember(Name="vpsNyCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsNyCost")]
    public decimal? VpsNyCost { get; set; }

    /// <summary>
    /// Cost of VPS Slice KVM Windows
    /// </summary>
    /// <value>Cost of VPS Slice KVM Windows</value>
    [DataMember(Name="vpsSliceKvmWCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "vpsSliceKvmWCost")]
    public decimal? VpsSliceKvmWCost { get; set; }

    /// <summary>
    /// Cost of cPanel
    /// </summary>
    /// <value>Cost of cPanel</value>
    [DataMember(Name="cpanelCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "cpanelCost")]
    public decimal? CpanelCost { get; set; }

    /// <summary>
    /// Cost of DirectAdmin (DA)
    /// </summary>
    /// <value>Cost of DirectAdmin (DA)</value>
    [DataMember(Name="daCost", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "daCost")]
    public decimal? DaCost { get; set; }

    /// <summary>
    /// RAM for VPS Slice
    /// </summary>
    /// <value>RAM for VPS Slice</value>
    [DataMember(Name="ramSlice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ramSlice")]
    public string RamSlice { get; set; }

    /// <summary>
    /// Hard Disk for VPS Slice
    /// </summary>
    /// <value>Hard Disk for VPS Slice</value>
    [DataMember(Name="hdSlice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hdSlice")]
    public string HdSlice { get; set; }

    /// <summary>
    /// Storage Hard Disk for VPS Slice
    /// </summary>
    /// <value>Storage Hard Disk for VPS Slice</value>
    [DataMember(Name="hdStorageSlice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "hdStorageSlice")]
    public string HdStorageSlice { get; set; }

    /// <summary>
    /// Bandwidth for VPS Slice
    /// </summary>
    /// <value>Bandwidth for VPS Slice</value>
    [DataMember(Name="bwSlice", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bwSlice")]
    public string BwSlice { get; set; }

    /// <summary>
    /// Bandwidth Type
    /// </summary>
    /// <value>Bandwidth Type</value>
    [DataMember(Name="bwType", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bwType")]
    public string BwType { get; set; }

    /// <summary>
    /// Total Bandwidth
    /// </summary>
    /// <value>Total Bandwidth</value>
    [DataMember(Name="bwTotal", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "bwTotal")]
    public decimal? BwTotal { get; set; }

    /// <summary>
    /// Maximum Slices
    /// </summary>
    /// <value>Maximum Slices</value>
    [DataMember(Name="maxSlices", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "maxSlices")]
    public string MaxSlices { get; set; }

    /// <summary>
    /// Gets or Sets PlatformPackages
    /// </summary>
    [DataMember(Name="platformPackages", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "platformPackages")]
    public VpsOrderPlatformPackages PlatformPackages { get; set; }

    /// <summary>
    /// Gets or Sets PlatformNames
    /// </summary>
    [DataMember(Name="platformNames", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "platformNames")]
    public VpsOrderPlatformNames PlatformNames { get; set; }

    /// <summary>
    /// Gets or Sets PackageCosts
    /// </summary>
    [DataMember(Name="packageCosts", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "packageCosts")]
    public VpsOrderPackageCosts PackageCosts { get; set; }

    /// <summary>
    /// Gets or Sets LocationStock
    /// </summary>
    [DataMember(Name="locationStock", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "locationStock")]
    public VpsOrderLocationStock LocationStock { get; set; }

    /// <summary>
    /// Gets or Sets LocationNames
    /// </summary>
    [DataMember(Name="locationNames", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "locationNames")]
    public VpsOrderLocationNames LocationNames { get; set; }

    /// <summary>
    /// Gets or Sets OsNames
    /// </summary>
    [DataMember(Name="osNames", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "osNames")]
    public VpsOrderOsNames OsNames { get; set; }

    /// <summary>
    /// Gets or Sets Templates
    /// </summary>
    [DataMember(Name="templates", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "templates")]
    public VpsOrderTemplates Templates { get; set; }

    /// <summary>
    /// Gets or Sets ServiceTypes
    /// </summary>
    [DataMember(Name="serviceTypes", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "serviceTypes")]
    public VpsOrderServiceTypes ServiceTypes { get; set; }

    /// <summary>
    /// Currency
    /// </summary>
    /// <value>Currency</value>
    [DataMember(Name="currency", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currency")]
    public string Currency { get; set; }

    /// <summary>
    /// Currency Symbol
    /// </summary>
    /// <value>Currency Symbol</value>
    [DataMember(Name="currencySymbol", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "currencySymbol")]
    public string CurrencySymbol { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class VpsOrder {\n");
      sb.Append("  VpsSliceSsdOvzCost: ").Append(VpsSliceSsdOvzCost).Append("\n");
      sb.Append("  VpsSliceOvzCost: ").Append(VpsSliceOvzCost).Append("\n");
      sb.Append("  VpsSliceSsdVirtuozzoCost: ").Append(VpsSliceSsdVirtuozzoCost).Append("\n");
      sb.Append("  VpsSliceVirtuozzoCost: ").Append(VpsSliceVirtuozzoCost).Append("\n");
      sb.Append("  VpsSliceHypervCost: ").Append(VpsSliceHypervCost).Append("\n");
      sb.Append("  VpsSliceVmwareCost: ").Append(VpsSliceVmwareCost).Append("\n");
      sb.Append("  VpsSliceLxcCost: ").Append(VpsSliceLxcCost).Append("\n");
      sb.Append("  VpsSliceXenCost: ").Append(VpsSliceXenCost).Append("\n");
      sb.Append("  VpsSliceKvmLCost: ").Append(VpsSliceKvmLCost).Append("\n");
      sb.Append("  VpsSliceKvmStorageCost: ").Append(VpsSliceKvmStorageCost).Append("\n");
      sb.Append("  VpsNyCost: ").Append(VpsNyCost).Append("\n");
      sb.Append("  VpsSliceKvmWCost: ").Append(VpsSliceKvmWCost).Append("\n");
      sb.Append("  CpanelCost: ").Append(CpanelCost).Append("\n");
      sb.Append("  DaCost: ").Append(DaCost).Append("\n");
      sb.Append("  RamSlice: ").Append(RamSlice).Append("\n");
      sb.Append("  HdSlice: ").Append(HdSlice).Append("\n");
      sb.Append("  HdStorageSlice: ").Append(HdStorageSlice).Append("\n");
      sb.Append("  BwSlice: ").Append(BwSlice).Append("\n");
      sb.Append("  BwType: ").Append(BwType).Append("\n");
      sb.Append("  BwTotal: ").Append(BwTotal).Append("\n");
      sb.Append("  MaxSlices: ").Append(MaxSlices).Append("\n");
      sb.Append("  PlatformPackages: ").Append(PlatformPackages).Append("\n");
      sb.Append("  PlatformNames: ").Append(PlatformNames).Append("\n");
      sb.Append("  PackageCosts: ").Append(PackageCosts).Append("\n");
      sb.Append("  LocationStock: ").Append(LocationStock).Append("\n");
      sb.Append("  LocationNames: ").Append(LocationNames).Append("\n");
      sb.Append("  OsNames: ").Append(OsNames).Append("\n");
      sb.Append("  Templates: ").Append(Templates).Append("\n");
      sb.Append("  ServiceTypes: ").Append(ServiceTypes).Append("\n");
      sb.Append("  Currency: ").Append(Currency).Append("\n");
      sb.Append("  CurrencySymbol: ").Append(CurrencySymbol).Append("\n");
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
