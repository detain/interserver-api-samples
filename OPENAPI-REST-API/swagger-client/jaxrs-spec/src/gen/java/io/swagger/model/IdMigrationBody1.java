package io.swagger.model;

import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class IdMigrationBody1   {

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
   **/
  public IdMigrationBody1 custPortal(String custPortal) {
    this.custPortal = custPortal;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("custPortal")
  @NotNull

  public String getCustPortal() {
    return custPortal;
  }
  public void setCustPortal(String custPortal) {
    this.custPortal = custPortal;
  }

  /**
   **/
  public IdMigrationBody1 regEmail(String regEmail) {
    this.regEmail = regEmail;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("regEmail")
  @NotNull

  public String getRegEmail() {
    return regEmail;
  }
  public void setRegEmail(String regEmail) {
    this.regEmail = regEmail;
  }

  /**
   **/
  public IdMigrationBody1 password(String password) {
    this.password = password;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("password")
  @NotNull

  public String getPassword() {
    return password;
  }
  public void setPassword(String password) {
    this.password = password;
  }

  /**
   **/
  public IdMigrationBody1 ctrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("ctrlPanel")
  @NotNull

  public String getCtrlPanel() {
    return ctrlPanel;
  }
  public void setCtrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
  }

  /**
   **/
  public IdMigrationBody1 ftpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("ftpUsername")
  @NotNull

  public String getFtpUsername() {
    return ftpUsername;
  }
  public void setFtpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
  }

  /**
   **/
  public IdMigrationBody1 ftpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("ftpPassword")
  @NotNull

  public String getFtpPassword() {
    return ftpPassword;
  }
  public void setFtpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
  }

  /**
   **/
  public IdMigrationBody1 siteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("siteBusyMig")
  @NotNull

  public String getSiteBusyMig() {
    return siteBusyMig;
  }
  public void setSiteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
  }

  /**
   **/
  public IdMigrationBody1 splReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("splReqMig")
  @NotNull

  public String getSplReqMig() {
    return splReqMig;
  }
  public void setSplReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
  }

  /**
   **/
  public IdMigrationBody1 domainReg(String domainReg) {
    this.domainReg = domainReg;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domainReg")
  @NotNull

  public String getDomainReg() {
    return domainReg;
  }
  public void setDomainReg(String domainReg) {
    this.domainReg = domainReg;
  }

  /**
   **/
  public IdMigrationBody1 dataMig(String dataMig) {
    this.dataMig = dataMig;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("dataMig")
  @NotNull

  public String getDataMig() {
    return dataMig;
  }
  public void setDataMig(String dataMig) {
    this.dataMig = dataMig;
  }

  /**
   **/
  public IdMigrationBody1 domainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domainRegPortal")
  @NotNull

  public String getDomainRegPortal() {
    return domainRegPortal;
  }
  public void setDomainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
  }

  /**
   **/
  public IdMigrationBody1 domainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("domainRegEmail")
  @NotNull

  public String getDomainRegEmail() {
    return domainRegEmail;
  }
  public void setDomainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
  }

  /**
   **/
  public IdMigrationBody1 domainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
    return this;
  }

  
  @ApiModelProperty(value = "")
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
    IdMigrationBody1 idMigrationBody1 = (IdMigrationBody1) o;
    return Objects.equals(custPortal, idMigrationBody1.custPortal) &&
        Objects.equals(regEmail, idMigrationBody1.regEmail) &&
        Objects.equals(password, idMigrationBody1.password) &&
        Objects.equals(ctrlPanel, idMigrationBody1.ctrlPanel) &&
        Objects.equals(ftpUsername, idMigrationBody1.ftpUsername) &&
        Objects.equals(ftpPassword, idMigrationBody1.ftpPassword) &&
        Objects.equals(siteBusyMig, idMigrationBody1.siteBusyMig) &&
        Objects.equals(splReqMig, idMigrationBody1.splReqMig) &&
        Objects.equals(domainReg, idMigrationBody1.domainReg) &&
        Objects.equals(dataMig, idMigrationBody1.dataMig) &&
        Objects.equals(domainRegPortal, idMigrationBody1.domainRegPortal) &&
        Objects.equals(domainRegEmail, idMigrationBody1.domainRegEmail) &&
        Objects.equals(domainRegPassword, idMigrationBody1.domainRegPassword);
  }

  @Override
  public int hashCode() {
    return Objects.hash(custPortal, regEmail, password, ctrlPanel, ftpUsername, ftpPassword, siteBusyMig, splReqMig, domainReg, dataMig, domainRegPortal, domainRegEmail, domainRegPassword);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
