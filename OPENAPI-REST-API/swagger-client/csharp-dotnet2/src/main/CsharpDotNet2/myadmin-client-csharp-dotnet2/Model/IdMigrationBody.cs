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
  public class IdMigrationBody {
    /// <summary>
    /// URL of the customer's current hosting portal.
    /// </summary>
    /// <value>URL of the customer's current hosting portal.</value>
    [DataMember(Name="custPortal", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "custPortal")]
    public string CustPortal { get; set; }

    /// <summary>
    /// Registered email address at the current host.
    /// </summary>
    /// <value>Registered email address at the current host.</value>
    [DataMember(Name="regEmail", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "regEmail")]
    public string RegEmail { get; set; }

    /// <summary>
    /// Password for the current hosting account.
    /// </summary>
    /// <value>Password for the current hosting account.</value>
    [DataMember(Name="password", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "password")]
    public string Password { get; set; }

    /// <summary>
    /// URL of the current control panel.
    /// </summary>
    /// <value>URL of the current control panel.</value>
    [DataMember(Name="ctrlPanel", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ctrlPanel")]
    public string CtrlPanel { get; set; }

    /// <summary>
    /// FTP username at the current host.
    /// </summary>
    /// <value>FTP username at the current host.</value>
    [DataMember(Name="ftpUsername", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ftpUsername")]
    public string FtpUsername { get; set; }

    /// <summary>
    /// FTP password at the current host.
    /// </summary>
    /// <value>FTP password at the current host.</value>
    [DataMember(Name="ftpPassword", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "ftpPassword")]
    public string FtpPassword { get; set; }

    /// <summary>
    /// Information about site traffic during migration.
    /// </summary>
    /// <value>Information about site traffic during migration.</value>
    [DataMember(Name="siteBusyMig", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "siteBusyMig")]
    public string SiteBusyMig { get; set; }

    /// <summary>
    /// Special requirements for the migration.
    /// </summary>
    /// <value>Special requirements for the migration.</value>
    [DataMember(Name="splReqMig", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "splReqMig")]
    public string SplReqMig { get; set; }

    /// <summary>
    /// Whether domain registration assistance is needed.
    /// </summary>
    /// <value>Whether domain registration assistance is needed.</value>
    [DataMember(Name="domainReg", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domainReg")]
    public string DomainReg { get; set; }

    /// <summary>
    /// Data migration timing preference.
    /// </summary>
    /// <value>Data migration timing preference.</value>
    [DataMember(Name="dataMig", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "dataMig")]
    public string DataMig { get; set; }

    /// <summary>
    /// Domain registrar portal URL.
    /// </summary>
    /// <value>Domain registrar portal URL.</value>
    [DataMember(Name="domainRegPortal", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domainRegPortal")]
    public string DomainRegPortal { get; set; }

    /// <summary>
    /// Email for the domain registrar account.
    /// </summary>
    /// <value>Email for the domain registrar account.</value>
    [DataMember(Name="domainRegEmail", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domainRegEmail")]
    public string DomainRegEmail { get; set; }

    /// <summary>
    /// Password for the domain registrar account.
    /// </summary>
    /// <value>Password for the domain registrar account.</value>
    [DataMember(Name="domainRegPassword", EmitDefaultValue=false)]
    [JsonProperty(PropertyName = "domainRegPassword")]
    public string DomainRegPassword { get; set; }


    /// <summary>
    /// Get the string presentation of the object
    /// </summary>
    /// <returns>String presentation of the object</returns>
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class IdMigrationBody {\n");
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
