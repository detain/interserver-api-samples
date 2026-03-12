package io.swagger.model;

import javax.validation.constraints.*;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;
import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlType;
import javax.xml.bind.annotation.XmlEnum;
import javax.xml.bind.annotation.XmlEnumValue;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonValue;
import com.fasterxml.jackson.annotation.JsonCreator;

public class IdMigrationBody   {
  
  @Schema(description = "URL of the customer's current hosting portal.")
 /**
   * URL of the customer's current hosting portal.  
  **/
  private String custPortal = null;
  
  @Schema(description = "Registered email address at the current host.")
 /**
   * Registered email address at the current host.  
  **/
  private String regEmail = null;
  
  @Schema(description = "Password for the current hosting account.")
 /**
   * Password for the current hosting account.  
  **/
  private String password = null;
  
  @Schema(description = "URL of the current control panel.")
 /**
   * URL of the current control panel.  
  **/
  private String ctrlPanel = null;
  
  @Schema(description = "FTP username at the current host.")
 /**
   * FTP username at the current host.  
  **/
  private String ftpUsername = null;
  
  @Schema(description = "FTP password at the current host.")
 /**
   * FTP password at the current host.  
  **/
  private String ftpPassword = null;
  
  @Schema(description = "Information about site traffic during migration.")
 /**
   * Information about site traffic during migration.  
  **/
  private String siteBusyMig = null;
  
  @Schema(description = "Special requirements for the migration.")
 /**
   * Special requirements for the migration.  
  **/
  private String splReqMig = null;
  
  @Schema(description = "Whether domain registration assistance is needed.")
 /**
   * Whether domain registration assistance is needed.  
  **/
  private String domainReg = null;
  
  @Schema(description = "Data migration timing preference.")
 /**
   * Data migration timing preference.  
  **/
  private String dataMig = null;
  
  @Schema(description = "Domain registrar portal URL.")
 /**
   * Domain registrar portal URL.  
  **/
  private String domainRegPortal = null;
  
  @Schema(description = "Email for the domain registrar account.")
 /**
   * Email for the domain registrar account.  
  **/
  private String domainRegEmail = null;
  
  @Schema(description = "Password for the domain registrar account.")
 /**
   * Password for the domain registrar account.  
  **/
  private String domainRegPassword = null;
 /**
   * URL of the customer&#x27;s current hosting portal.
   * @return custPortal
  **/
  @JsonProperty("custPortal")
  @NotNull
  public String getCustPortal() {
    return custPortal;
  }

  public void setCustPortal(String custPortal) {
    this.custPortal = custPortal;
  }

  public IdMigrationBody custPortal(String custPortal) {
    this.custPortal = custPortal;
    return this;
  }

 /**
   * Registered email address at the current host.
   * @return regEmail
  **/
  @JsonProperty("regEmail")
  @NotNull
  public String getRegEmail() {
    return regEmail;
  }

  public void setRegEmail(String regEmail) {
    this.regEmail = regEmail;
  }

  public IdMigrationBody regEmail(String regEmail) {
    this.regEmail = regEmail;
    return this;
  }

 /**
   * Password for the current hosting account.
   * @return password
  **/
  @JsonProperty("password")
  @NotNull
  public String getPassword() {
    return password;
  }

  public void setPassword(String password) {
    this.password = password;
  }

  public IdMigrationBody password(String password) {
    this.password = password;
    return this;
  }

 /**
   * URL of the current control panel.
   * @return ctrlPanel
  **/
  @JsonProperty("ctrlPanel")
  @NotNull
  public String getCtrlPanel() {
    return ctrlPanel;
  }

  public void setCtrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
  }

  public IdMigrationBody ctrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
    return this;
  }

 /**
   * FTP username at the current host.
   * @return ftpUsername
  **/
  @JsonProperty("ftpUsername")
  @NotNull
  public String getFtpUsername() {
    return ftpUsername;
  }

  public void setFtpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
  }

  public IdMigrationBody ftpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
    return this;
  }

 /**
   * FTP password at the current host.
   * @return ftpPassword
  **/
  @JsonProperty("ftpPassword")
  @NotNull
  public String getFtpPassword() {
    return ftpPassword;
  }

  public void setFtpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
  }

  public IdMigrationBody ftpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
    return this;
  }

 /**
   * Information about site traffic during migration.
   * @return siteBusyMig
  **/
  @JsonProperty("siteBusyMig")
  @NotNull
  public String getSiteBusyMig() {
    return siteBusyMig;
  }

  public void setSiteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
  }

  public IdMigrationBody siteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
    return this;
  }

 /**
   * Special requirements for the migration.
   * @return splReqMig
  **/
  @JsonProperty("splReqMig")
  @NotNull
  public String getSplReqMig() {
    return splReqMig;
  }

  public void setSplReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
  }

  public IdMigrationBody splReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
    return this;
  }

 /**
   * Whether domain registration assistance is needed.
   * @return domainReg
  **/
  @JsonProperty("domainReg")
  @NotNull
  public String getDomainReg() {
    return domainReg;
  }

  public void setDomainReg(String domainReg) {
    this.domainReg = domainReg;
  }

  public IdMigrationBody domainReg(String domainReg) {
    this.domainReg = domainReg;
    return this;
  }

 /**
   * Data migration timing preference.
   * @return dataMig
  **/
  @JsonProperty("dataMig")
  @NotNull
  public String getDataMig() {
    return dataMig;
  }

  public void setDataMig(String dataMig) {
    this.dataMig = dataMig;
  }

  public IdMigrationBody dataMig(String dataMig) {
    this.dataMig = dataMig;
    return this;
  }

 /**
   * Domain registrar portal URL.
   * @return domainRegPortal
  **/
  @JsonProperty("domainRegPortal")
  @NotNull
  public String getDomainRegPortal() {
    return domainRegPortal;
  }

  public void setDomainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
  }

  public IdMigrationBody domainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
    return this;
  }

 /**
   * Email for the domain registrar account.
   * @return domainRegEmail
  **/
  @JsonProperty("domainRegEmail")
  @NotNull
  public String getDomainRegEmail() {
    return domainRegEmail;
  }

  public void setDomainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
  }

  public IdMigrationBody domainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
    return this;
  }

 /**
   * Password for the domain registrar account.
   * @return domainRegPassword
  **/
  @JsonProperty("domainRegPassword")
  @NotNull
  public String getDomainRegPassword() {
    return domainRegPassword;
  }

  public void setDomainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
  }

  public IdMigrationBody domainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IdMigrationBody {\n");
    
    sb.append("    custPortal: ").append(toIndentedString(custPortal)).append("\n");
    sb.append("    regEmail: ").append(toIndentedString(regEmail)).append("\n");
    sb.append("    password: ").append(toIndentedString(password)).append("\n");
    sb.append("    ctrlPanel: ").append(toIndentedString(ctrlPanel)).append("\n");
    sb.append("    ftpUsername: ").append(toIndentedString(ftpUsername)).append("\n");
    sb.append("    ftpPassword: ").append(toIndentedString(ftpPassword)).append("\n");
    sb.append("    siteBusyMig: ").append(toIndentedString(siteBusyMig)).append("\n");
    sb.append("    splReqMig: ").append(toIndentedString(splReqMig)).append("\n");
    sb.append("    domainReg: ").append(toIndentedString(domainReg)).append("\n");
    sb.append("    dataMig: ").append(toIndentedString(dataMig)).append("\n");
    sb.append("    domainRegPortal: ").append(toIndentedString(domainRegPortal)).append("\n");
    sb.append("    domainRegEmail: ").append(toIndentedString(domainRegEmail)).append("\n");
    sb.append("    domainRegPassword: ").append(toIndentedString(domainRegPassword)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
