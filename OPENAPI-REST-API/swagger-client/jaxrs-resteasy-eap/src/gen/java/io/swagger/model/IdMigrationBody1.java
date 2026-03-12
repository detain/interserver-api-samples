package io.swagger.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.HashMap;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import javax.validation.constraints.*;
import io.swagger.v3.oas.annotations.media.Schema;



public class IdMigrationBody1   {
  private String custPortal = null;
  private String regEmail = null;
  private String password = null;
  private String ctrlPanel = null;
  private String ftpUsername = null;
  private String ftpPassword = null;
  private String siteBusyMig = null;
  private String splReqMig = null;
  private String domainReg = null;
  private String dataMig = null;
  private String domainRegPortal = null;
  private String domainRegEmail = null;
  private String domainRegPassword = null;

  /**
   **/
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
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
  
  @Schema(description = "")
  @JsonProperty("domainRegPassword")
  @NotNull
  public String getDomainRegPassword() {
    return domainRegPassword;
  }
  public void setDomainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
  }


  @Override
  public boolean equals(Object o) {
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
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
