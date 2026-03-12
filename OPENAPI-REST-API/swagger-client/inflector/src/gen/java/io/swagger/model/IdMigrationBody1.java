package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;





public class IdMigrationBody1   {
  @JsonProperty("custPortal")
  private String custPortal = null;
  @JsonProperty("regEmail")
  private String regEmail = null;
  @JsonProperty("password")
  private String password = null;
  @JsonProperty("ctrlPanel")
  private String ctrlPanel = null;
  @JsonProperty("ftpUsername")
  private String ftpUsername = null;
  @JsonProperty("ftpPassword")
  private String ftpPassword = null;
  @JsonProperty("siteBusyMig")
  private String siteBusyMig = null;
  @JsonProperty("splReqMig")
  private String splReqMig = null;
  @JsonProperty("domainReg")
  private String domainReg = null;
  @JsonProperty("dataMig")
  private String dataMig = null;
  @JsonProperty("domainRegPortal")
  private String domainRegPortal = null;
  @JsonProperty("domainRegEmail")
  private String domainRegEmail = null;
  @JsonProperty("domainRegPassword")
  private String domainRegPassword = null;
  /**
   **/
  public IdMigrationBody1 custPortal(String custPortal) {
    this.custPortal = custPortal;
    return this;
  }

  
  @Schema(description = "")
  @JsonProperty("custPortal")
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

  
  @Schema(description = "")
  @JsonProperty("regEmail")
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

  
  @Schema(description = "")
  @JsonProperty("password")
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

  
  @Schema(description = "")
  @JsonProperty("ctrlPanel")
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

  
  @Schema(description = "")
  @JsonProperty("ftpUsername")
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

  
  @Schema(description = "")
  @JsonProperty("ftpPassword")
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

  
  @Schema(description = "")
  @JsonProperty("siteBusyMig")
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

  
  @Schema(description = "")
  @JsonProperty("splReqMig")
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

  
  @Schema(description = "")
  @JsonProperty("domainReg")
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

  
  @Schema(description = "")
  @JsonProperty("dataMig")
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

  
  @Schema(description = "")
  @JsonProperty("domainRegPortal")
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

  
  @Schema(description = "")
  @JsonProperty("domainRegEmail")
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

  
  @Schema(description = "")
  @JsonProperty("domainRegPassword")
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
