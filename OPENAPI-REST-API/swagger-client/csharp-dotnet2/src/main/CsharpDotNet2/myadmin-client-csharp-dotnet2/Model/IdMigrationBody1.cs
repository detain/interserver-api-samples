using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Model {

  /// <summary>
  /// 
  /// </summary>
  [DataContract]
  public class IdMigrationBody1 {
    /// <summary>
    /// Gets or Sets CustPortal
    /// </summary>
    [DataMember(Name="custPortal", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custPortal")]
    public string CustPortal { get; set; }

    /// <summary>
    /// Gets or Sets RegEmail
    /// </summary>
    [DataMember(Name="regEmail", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "regEmail")]
    public string RegEmail { get; set; }

    /// <summary>
    /// Gets or Sets Password
    /// </summary>
    [DataMember(Name="password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "password")]
    public string Password { get; set; }

    /// <summary>
    /// Gets or Sets CtrlPanel
    /// </summary>
    [DataMember(Name="ctrlPanel", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ctrlPanel")]
    public string CtrlPanel { get; set; }

    /// <summary>
    /// Gets or Sets FtpUsername
    /// </summary>
    [DataMember(Name="ftpUsername", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ftpUsername")]
    public string FtpUsername { get; set; }

    /// <summary>
    /// Gets or Sets FtpPassword
    /// </summary>
    [DataMember(Name="ftpPassword", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ftpPassword")]
    public string FtpPassword { get; set; }

    /// <summary>
    /// Gets or Sets SiteBusyMig
    /// </summary>
    [DataMember(Name="siteBusyMig", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "siteBusyMig")]
    public string SiteBusyMig { get; set; }

    /// <summary>
    /// Gets or Sets SplReqMig
    /// </summary>
    [DataMember(Name="splReqMig", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "splReqMig")]
    public string SplReqMig { get; set; }

    /// <summary>
    /// Gets or Sets DomainReg
    /// </summary>
    [DataMember(Name="domainReg", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domainReg")]
    public string DomainReg { get; set; }

    /// <summary>
    /// Gets or Sets DataMig
    /// </summary>
    [DataMember(Name="dataMig", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "dataMig")]
    public string DataMig { get; set; }

    /// <summary>
    /// Gets or Sets DomainRegPortal
    /// </summary>
    [DataMember(Name="domainRegPortal", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domainRegPortal")]
    public string DomainRegPortal { get; set; }

    /// <summary>
    /// Gets or Sets DomainRegEmail
    /// </summary>
    [DataMember(Name="domainRegEmail", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domainRegEmail")]
    public string DomainRegEmail { get; set; }

    /// <summary>
    /// Gets or Sets DomainRegPassword
    /// </summary>
    [DataMember(Name="domainRegPassword", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domainRegPassword")]
    public string DomainRegPassword { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class IdMigrationBody1 {\n");
      sb.Append("  CustPortal: ").Append(CustPortal).Append("\n");
      sb.Append("  RegEmail: ").Append(RegEmail).Append("\n");
      sb.Append("  Password: ").Append(Password).Append("\n");
      sb.Append("  CtrlPanel: ").Append(CtrlPanel).Append("\n");
      sb.Append("  FtpUsername: ").Append(FtpUsername).Append("\n");
      sb.Append("  FtpPassword: ").Append(FtpPassword).Append("\n");
      sb.Append("  SiteBusyMig: ").Append(SiteBusyMig).Append("\n");
      sb.Append("  SplReqMig: ").Append(SplReqMig).Append("\n");
      sb.Append("  DomainReg: ").Append(DomainReg).Append("\n");
      sb.Append("  DataMig: ").Append(DataMig).Append("\n");
      sb.Append("  DomainRegPortal: ").Append(DomainRegPortal).Append("\n");
      sb.Append("  DomainRegEmail: ").Append(DomainRegEmail).Append("\n");
      sb.Append("  DomainRegPassword: ").Append(DomainRegPassword).Append("\n");
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
