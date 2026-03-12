package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class IdMigrationBody   {

  private @Valid String custPortal = null;

  private @Valid String regEmail = null;

  private @Valid String password = null;

  private @Valid String ctrlPanel = null;

  private @Valid String ftpUsername = null;

  private @Valid String ftpPassword = null;

  private @Valid String siteBusyMig = null;

  private @Valid String splReqMig = null;

  private @Valid String domainReg = null;

  private @Valid String dataMig = null;

  private @Valid String domainRegPortal = null;

  private @Valid String domainRegEmail = null;

  private @Valid String domainRegPassword = null;

  /**
   * URL of the customer&#x27;s current hosting portal.
   **/
  public IdMigrationBody custPortal(String custPortal) {
    this.custPortal = custPortal;
    return this;
  }

  
  @ApiModelProperty(value = "URL of the customer's current hosting portal.")
  @JsonProperty("custPortal")
  @NotNull

  public String getCustPortal() {
    return custPortal;
  }
  public void setCustPortal(String custPortal) {
    this.custPortal = custPortal;
  }

  /**
   * Registered email address at the current host.
   **/
  public IdMigrationBody regEmail(String regEmail) {
    this.regEmail = regEmail;
    return this;
  }

  
  @ApiModelProperty(value = "Registered email address at the current host.")
  @JsonProperty("regEmail")
  @NotNull

  public String getRegEmail() {
    return regEmail;
  }
  public void setRegEmail(String regEmail) {
    this.regEmail = regEmail;
  }

  /**
   * Password for the current hosting account.
   **/
  public IdMigrationBody password(String password) {
    this.password = password;
    return this;
  }

  
  @ApiModelProperty(value = "Password for the current hosting account.")
  @JsonProperty("password")
  @NotNull

  public String getPassword() {
    return password;
  }
  public void setPassword(String password) {
    this.password = password;
  }

  /**
   * URL of the current control panel.
   **/
  public IdMigrationBody ctrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
    return this;
  }

  
  @ApiModelProperty(value = "URL of the current control panel.")
  @JsonProperty("ctrlPanel")
  @NotNull

  public String getCtrlPanel() {
    return ctrlPanel;
  }
  public void setCtrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
  }

  /**
   * FTP username at the current host.
   **/
  public IdMigrationBody ftpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
    return this;
  }

  
  @ApiModelProperty(value = "FTP username at the current host.")
  @JsonProperty("ftpUsername")
  @NotNull

  public String getFtpUsername() {
    return ftpUsername;
  }
  public void setFtpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
  }

  /**
   * FTP password at the current host.
   **/
  public IdMigrationBody ftpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
    return this;
  }

  
  @ApiModelProperty(value = "FTP password at the current host.")
  @JsonProperty("ftpPassword")
  @NotNull

  public String getFtpPassword() {
    return ftpPassword;
  }
  public void setFtpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
  }

  /**
   * Information about site traffic during migration.
   **/
  public IdMigrationBody siteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
    return this;
  }

  
  @ApiModelProperty(value = "Information about site traffic during migration.")
  @JsonProperty("siteBusyMig")
  @NotNull

  public String getSiteBusyMig() {
    return siteBusyMig;
  }
  public void setSiteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
  }

  /**
   * Special requirements for the migration.
   **/
  public IdMigrationBody splReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
    return this;
  }

  
  @ApiModelProperty(value = "Special requirements for the migration.")
  @JsonProperty("splReqMig")
  @NotNull

  public String getSplReqMig() {
    return splReqMig;
  }
  public void setSplReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
  }

  /**
   * Whether domain registration assistance is needed.
   **/
  public IdMigrationBody domainReg(String domainReg) {
    this.domainReg = domainReg;
    return this;
  }

  
  @ApiModelProperty(value = "Whether domain registration assistance is needed.")
  @JsonProperty("domainReg")
  @NotNull

  public String getDomainReg() {
    return domainReg;
  }
  public void setDomainReg(String domainReg) {
    this.domainReg = domainReg;
  }

  /**
   * Data migration timing preference.
   **/
  public IdMigrationBody dataMig(String dataMig) {
    this.dataMig = dataMig;
    return this;
  }

  
  @ApiModelProperty(value = "Data migration timing preference.")
  @JsonProperty("dataMig")
  @NotNull

  public String getDataMig() {
    return dataMig;
  }
  public void setDataMig(String dataMig) {
    this.dataMig = dataMig;
  }

  /**
   * Domain registrar portal URL.
   **/
  public IdMigrationBody domainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
    return this;
  }

  
  @ApiModelProperty(value = "Domain registrar portal URL.")
  @JsonProperty("domainRegPortal")
  @NotNull

  public String getDomainRegPortal() {
    return domainRegPortal;
  }
  public void setDomainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
  }

  /**
   * Email for the domain registrar account.
   **/
  public IdMigrationBody domainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
    return this;
  }

  
  @ApiModelProperty(value = "Email for the domain registrar account.")
  @JsonProperty("domainRegEmail")
  @NotNull

  public String getDomainRegEmail() {
    return domainRegEmail;
  }
  public void setDomainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
  }

  /**
   * Password for the domain registrar account.
   **/
  public IdMigrationBody domainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
    return this;
  }

  
  @ApiModelProperty(value = "Password for the domain registrar account.")
  @JsonProperty("domainRegPassword")
  @NotNull

  public String getDomainRegPassword() {
    return domainRegPassword;
  }
  public void setDomainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    IdMigrationBody idMigrationBody = (IdMigrationBody) o;
    return Objects.equals(custPortal, idMigrationBody.custPortal) &&
        Objects.equals(regEmail, idMigrationBody.regEmail) &&
        Objects.equals(password, idMigrationBody.password) &&
        Objects.equals(ctrlPanel, idMigrationBody.ctrlPanel) &&
        Objects.equals(ftpUsername, idMigrationBody.ftpUsername) &&
        Objects.equals(ftpPassword, idMigrationBody.ftpPassword) &&
        Objects.equals(siteBusyMig, idMigrationBody.siteBusyMig) &&
        Objects.equals(splReqMig, idMigrationBody.splReqMig) &&
        Objects.equals(domainReg, idMigrationBody.domainReg) &&
        Objects.equals(dataMig, idMigrationBody.dataMig) &&
        Objects.equals(domainRegPortal, idMigrationBody.domainRegPortal) &&
        Objects.equals(domainRegEmail, idMigrationBody.domainRegEmail) &&
        Objects.equals(domainRegPassword, idMigrationBody.domainRegPassword);
  }

  @Override
  public int hashCode() {
    return Objects.hash(custPortal, regEmail, password, ctrlPanel, ftpUsername, ftpPassword, siteBusyMig, splReqMig, domainReg, dataMig, domainRegPortal, domainRegEmail, domainRegPassword);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
