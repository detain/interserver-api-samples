package io.swagger.model;


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

public class IdMigrationBody1   {
  
  @Schema(description = "")
  private String custPortal = null;
  
  @Schema(description = "")
  private String regEmail = null;
  
  @Schema(description = "")
  private String password = null;
  
  @Schema(description = "")
  private String ctrlPanel = null;
  
  @Schema(description = "")
  private String ftpUsername = null;
  
  @Schema(description = "")
  private String ftpPassword = null;
  
  @Schema(description = "")
  private String siteBusyMig = null;
  
  @Schema(description = "")
  private String splReqMig = null;
  
  @Schema(description = "")
  private String domainReg = null;
  
  @Schema(description = "")
  private String dataMig = null;
  
  @Schema(description = "")
  private String domainRegPortal = null;
  
  @Schema(description = "")
  private String domainRegEmail = null;
  
  @Schema(description = "")
  private String domainRegPassword = null;
 /**
   * Get custPortal
   * @return custPortal
  **/
  @JsonProperty("custPortal")
  public String getCustPortal() {
    return custPortal;
  }

  public void setCustPortal(String custPortal) {
    this.custPortal = custPortal;
  }

  public IdMigrationBody1 custPortal(String custPortal) {
    this.custPortal = custPortal;
    return this;
  }

 /**
   * Get regEmail
   * @return regEmail
  **/
  @JsonProperty("regEmail")
  public String getRegEmail() {
    return regEmail;
  }

  public void setRegEmail(String regEmail) {
    this.regEmail = regEmail;
  }

  public IdMigrationBody1 regEmail(String regEmail) {
    this.regEmail = regEmail;
    return this;
  }

 /**
   * Get password
   * @return password
  **/
  @JsonProperty("password")
  public String getPassword() {
    return password;
  }

  public void setPassword(String password) {
    this.password = password;
  }

  public IdMigrationBody1 password(String password) {
    this.password = password;
    return this;
  }

 /**
   * Get ctrlPanel
   * @return ctrlPanel
  **/
  @JsonProperty("ctrlPanel")
  public String getCtrlPanel() {
    return ctrlPanel;
  }

  public void setCtrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
  }

  public IdMigrationBody1 ctrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
    return this;
  }

 /**
   * Get ftpUsername
   * @return ftpUsername
  **/
  @JsonProperty("ftpUsername")
  public String getFtpUsername() {
    return ftpUsername;
  }

  public void setFtpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
  }

  public IdMigrationBody1 ftpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
    return this;
  }

 /**
   * Get ftpPassword
   * @return ftpPassword
  **/
  @JsonProperty("ftpPassword")
  public String getFtpPassword() {
    return ftpPassword;
  }

  public void setFtpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
  }

  public IdMigrationBody1 ftpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
    return this;
  }

 /**
   * Get siteBusyMig
   * @return siteBusyMig
  **/
  @JsonProperty("siteBusyMig")
  public String getSiteBusyMig() {
    return siteBusyMig;
  }

  public void setSiteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
  }

  public IdMigrationBody1 siteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
    return this;
  }

 /**
   * Get splReqMig
   * @return splReqMig
  **/
  @JsonProperty("splReqMig")
  public String getSplReqMig() {
    return splReqMig;
  }

  public void setSplReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
  }

  public IdMigrationBody1 splReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
    return this;
  }

 /**
   * Get domainReg
   * @return domainReg
  **/
  @JsonProperty("domainReg")
  public String getDomainReg() {
    return domainReg;
  }

  public void setDomainReg(String domainReg) {
    this.domainReg = domainReg;
  }

  public IdMigrationBody1 domainReg(String domainReg) {
    this.domainReg = domainReg;
    return this;
  }

 /**
   * Get dataMig
   * @return dataMig
  **/
  @JsonProperty("dataMig")
  public String getDataMig() {
    return dataMig;
  }

  public void setDataMig(String dataMig) {
    this.dataMig = dataMig;
  }

  public IdMigrationBody1 dataMig(String dataMig) {
    this.dataMig = dataMig;
    return this;
  }

 /**
   * Get domainRegPortal
   * @return domainRegPortal
  **/
  @JsonProperty("domainRegPortal")
  public String getDomainRegPortal() {
    return domainRegPortal;
  }

  public void setDomainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
  }

  public IdMigrationBody1 domainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
    return this;
  }

 /**
   * Get domainRegEmail
   * @return domainRegEmail
  **/
  @JsonProperty("domainRegEmail")
  public String getDomainRegEmail() {
    return domainRegEmail;
  }

  public void setDomainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
  }

  public IdMigrationBody1 domainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
    return this;
  }

 /**
   * Get domainRegPassword
   * @return domainRegPassword
  **/
  @JsonProperty("domainRegPassword")
  public String getDomainRegPassword() {
    return domainRegPassword;
  }

  public void setDomainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
  }

  public IdMigrationBody1 domainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class IdMigrationBody1 {\n");
    
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
