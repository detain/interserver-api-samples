package io.swagger.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.vertx.core.json.JsonObject;
import io.vertx.codegen.annotations.DataObject;
/**
 * IdMigrationBody1
 */




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

  public IdMigrationBody1 custPortal(String custPortal) {
    this.custPortal = custPortal;
    return this;
  }

  /**
   * Get custPortal
   * @return custPortal
   **/
    public String getCustPortal() {
    return custPortal;
  }

  public void setCustPortal(String custPortal) {
    this.custPortal = custPortal;
  }

  public IdMigrationBody1 regEmail(String regEmail) {
    this.regEmail = regEmail;
    return this;
  }

  /**
   * Get regEmail
   * @return regEmail
   **/
    public String getRegEmail() {
    return regEmail;
  }

  public void setRegEmail(String regEmail) {
    this.regEmail = regEmail;
  }

  public IdMigrationBody1 password(String password) {
    this.password = password;
    return this;
  }

  /**
   * Get password
   * @return password
   **/
    public String getPassword() {
    return password;
  }

  public void setPassword(String password) {
    this.password = password;
  }

  public IdMigrationBody1 ctrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
    return this;
  }

  /**
   * Get ctrlPanel
   * @return ctrlPanel
   **/
    public String getCtrlPanel() {
    return ctrlPanel;
  }

  public void setCtrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
  }

  public IdMigrationBody1 ftpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
    return this;
  }

  /**
   * Get ftpUsername
   * @return ftpUsername
   **/
    public String getFtpUsername() {
    return ftpUsername;
  }

  public void setFtpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
  }

  public IdMigrationBody1 ftpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
    return this;
  }

  /**
   * Get ftpPassword
   * @return ftpPassword
   **/
    public String getFtpPassword() {
    return ftpPassword;
  }

  public void setFtpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
  }

  public IdMigrationBody1 siteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
    return this;
  }

  /**
   * Get siteBusyMig
   * @return siteBusyMig
   **/
    public String getSiteBusyMig() {
    return siteBusyMig;
  }

  public void setSiteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
  }

  public IdMigrationBody1 splReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
    return this;
  }

  /**
   * Get splReqMig
   * @return splReqMig
   **/
    public String getSplReqMig() {
    return splReqMig;
  }

  public void setSplReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
  }

  public IdMigrationBody1 domainReg(String domainReg) {
    this.domainReg = domainReg;
    return this;
  }

  /**
   * Get domainReg
   * @return domainReg
   **/
    public String getDomainReg() {
    return domainReg;
  }

  public void setDomainReg(String domainReg) {
    this.domainReg = domainReg;
  }

  public IdMigrationBody1 dataMig(String dataMig) {
    this.dataMig = dataMig;
    return this;
  }

  /**
   * Get dataMig
   * @return dataMig
   **/
    public String getDataMig() {
    return dataMig;
  }

  public void setDataMig(String dataMig) {
    this.dataMig = dataMig;
  }

  public IdMigrationBody1 domainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
    return this;
  }

  /**
   * Get domainRegPortal
   * @return domainRegPortal
   **/
    public String getDomainRegPortal() {
    return domainRegPortal;
  }

  public void setDomainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
  }

  public IdMigrationBody1 domainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
    return this;
  }

  /**
   * Get domainRegEmail
   * @return domainRegEmail
   **/
    public String getDomainRegEmail() {
    return domainRegEmail;
  }

  public void setDomainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
  }

  public IdMigrationBody1 domainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
    return this;
  }

  /**
   * Get domainRegPassword
   * @return domainRegPassword
   **/
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
    return Objects.equals(this.custPortal, idMigrationBody1.custPortal) &&
        Objects.equals(this.regEmail, idMigrationBody1.regEmail) &&
        Objects.equals(this.password, idMigrationBody1.password) &&
        Objects.equals(this.ctrlPanel, idMigrationBody1.ctrlPanel) &&
        Objects.equals(this.ftpUsername, idMigrationBody1.ftpUsername) &&
        Objects.equals(this.ftpPassword, idMigrationBody1.ftpPassword) &&
        Objects.equals(this.siteBusyMig, idMigrationBody1.siteBusyMig) &&
        Objects.equals(this.splReqMig, idMigrationBody1.splReqMig) &&
        Objects.equals(this.domainReg, idMigrationBody1.domainReg) &&
        Objects.equals(this.dataMig, idMigrationBody1.dataMig) &&
        Objects.equals(this.domainRegPortal, idMigrationBody1.domainRegPortal) &&
        Objects.equals(this.domainRegEmail, idMigrationBody1.domainRegEmail) &&
        Objects.equals(this.domainRegPassword, idMigrationBody1.domainRegPassword);
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
