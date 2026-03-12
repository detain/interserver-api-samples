package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class PostWebsiteMigrationRequest  {
  
 /**
  * URL of the customer's current hosting portal.
  */
  @ApiModelProperty(value = "URL of the customer's current hosting portal.")

  private String custPortal;

 /**
  * Registered email address at the current host.
  */
  @ApiModelProperty(value = "Registered email address at the current host.")

  private String regEmail;

 /**
  * Password for the current hosting account.
  */
  @ApiModelProperty(value = "Password for the current hosting account.")

  private String password;

 /**
  * URL of the current control panel.
  */
  @ApiModelProperty(value = "URL of the current control panel.")

  private String ctrlPanel;

 /**
  * FTP username at the current host.
  */
  @ApiModelProperty(value = "FTP username at the current host.")

  private String ftpUsername;

 /**
  * FTP password at the current host.
  */
  @ApiModelProperty(value = "FTP password at the current host.")

  private String ftpPassword;

 /**
  * Information about site traffic during migration.
  */
  @ApiModelProperty(value = "Information about site traffic during migration.")

  private String siteBusyMig;

 /**
  * Special requirements for the migration.
  */
  @ApiModelProperty(value = "Special requirements for the migration.")

  private String splReqMig;

 /**
  * Whether domain registration assistance is needed.
  */
  @ApiModelProperty(value = "Whether domain registration assistance is needed.")

  private String domainReg;

 /**
  * Data migration timing preference.
  */
  @ApiModelProperty(value = "Data migration timing preference.")

  private String dataMig;

 /**
  * Domain registrar portal URL.
  */
  @ApiModelProperty(value = "Domain registrar portal URL.")

  private String domainRegPortal;

 /**
  * Email for the domain registrar account.
  */
  @ApiModelProperty(value = "Email for the domain registrar account.")

  private String domainRegEmail;

 /**
  * Password for the domain registrar account.
  */
  @ApiModelProperty(value = "Password for the domain registrar account.")

  private String domainRegPassword;
 /**
   * URL of the customer&#39;s current hosting portal.
   * @return custPortal
  **/
  @JsonProperty("custPortal")
  public String getCustPortal() {
    return custPortal;
  }

  public void setCustPortal(String custPortal) {
    this.custPortal = custPortal;
  }

  public PostWebsiteMigrationRequest custPortal(String custPortal) {
    this.custPortal = custPortal;
    return this;
  }

 /**
   * Registered email address at the current host.
   * @return regEmail
  **/
  @JsonProperty("regEmail")
  public String getRegEmail() {
    return regEmail;
  }

  public void setRegEmail(String regEmail) {
    this.regEmail = regEmail;
  }

  public PostWebsiteMigrationRequest regEmail(String regEmail) {
    this.regEmail = regEmail;
    return this;
  }

 /**
   * Password for the current hosting account.
   * @return password
  **/
  @JsonProperty("password")
  public String getPassword() {
    return password;
  }

  public void setPassword(String password) {
    this.password = password;
  }

  public PostWebsiteMigrationRequest password(String password) {
    this.password = password;
    return this;
  }

 /**
   * URL of the current control panel.
   * @return ctrlPanel
  **/
  @JsonProperty("ctrlPanel")
  public String getCtrlPanel() {
    return ctrlPanel;
  }

  public void setCtrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
  }

  public PostWebsiteMigrationRequest ctrlPanel(String ctrlPanel) {
    this.ctrlPanel = ctrlPanel;
    return this;
  }

 /**
   * FTP username at the current host.
   * @return ftpUsername
  **/
  @JsonProperty("ftpUsername")
  public String getFtpUsername() {
    return ftpUsername;
  }

  public void setFtpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
  }

  public PostWebsiteMigrationRequest ftpUsername(String ftpUsername) {
    this.ftpUsername = ftpUsername;
    return this;
  }

 /**
   * FTP password at the current host.
   * @return ftpPassword
  **/
  @JsonProperty("ftpPassword")
  public String getFtpPassword() {
    return ftpPassword;
  }

  public void setFtpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
  }

  public PostWebsiteMigrationRequest ftpPassword(String ftpPassword) {
    this.ftpPassword = ftpPassword;
    return this;
  }

 /**
   * Information about site traffic during migration.
   * @return siteBusyMig
  **/
  @JsonProperty("siteBusyMig")
  public String getSiteBusyMig() {
    return siteBusyMig;
  }

  public void setSiteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
  }

  public PostWebsiteMigrationRequest siteBusyMig(String siteBusyMig) {
    this.siteBusyMig = siteBusyMig;
    return this;
  }

 /**
   * Special requirements for the migration.
   * @return splReqMig
  **/
  @JsonProperty("splReqMig")
  public String getSplReqMig() {
    return splReqMig;
  }

  public void setSplReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
  }

  public PostWebsiteMigrationRequest splReqMig(String splReqMig) {
    this.splReqMig = splReqMig;
    return this;
  }

 /**
   * Whether domain registration assistance is needed.
   * @return domainReg
  **/
  @JsonProperty("domainReg")
  public String getDomainReg() {
    return domainReg;
  }

  public void setDomainReg(String domainReg) {
    this.domainReg = domainReg;
  }

  public PostWebsiteMigrationRequest domainReg(String domainReg) {
    this.domainReg = domainReg;
    return this;
  }

 /**
   * Data migration timing preference.
   * @return dataMig
  **/
  @JsonProperty("dataMig")
  public String getDataMig() {
    return dataMig;
  }

  public void setDataMig(String dataMig) {
    this.dataMig = dataMig;
  }

  public PostWebsiteMigrationRequest dataMig(String dataMig) {
    this.dataMig = dataMig;
    return this;
  }

 /**
   * Domain registrar portal URL.
   * @return domainRegPortal
  **/
  @JsonProperty("domainRegPortal")
  public String getDomainRegPortal() {
    return domainRegPortal;
  }

  public void setDomainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
  }

  public PostWebsiteMigrationRequest domainRegPortal(String domainRegPortal) {
    this.domainRegPortal = domainRegPortal;
    return this;
  }

 /**
   * Email for the domain registrar account.
   * @return domainRegEmail
  **/
  @JsonProperty("domainRegEmail")
  public String getDomainRegEmail() {
    return domainRegEmail;
  }

  public void setDomainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
  }

  public PostWebsiteMigrationRequest domainRegEmail(String domainRegEmail) {
    this.domainRegEmail = domainRegEmail;
    return this;
  }

 /**
   * Password for the domain registrar account.
   * @return domainRegPassword
  **/
  @JsonProperty("domainRegPassword")
  public String getDomainRegPassword() {
    return domainRegPassword;
  }

  public void setDomainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
  }

  public PostWebsiteMigrationRequest domainRegPassword(String domainRegPassword) {
    this.domainRegPassword = domainRegPassword;
    return this;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PostWebsiteMigrationRequest postWebsiteMigrationRequest = (PostWebsiteMigrationRequest) o;
    return Objects.equals(this.custPortal, postWebsiteMigrationRequest.custPortal) &&
        Objects.equals(this.regEmail, postWebsiteMigrationRequest.regEmail) &&
        Objects.equals(this.password, postWebsiteMigrationRequest.password) &&
        Objects.equals(this.ctrlPanel, postWebsiteMigrationRequest.ctrlPanel) &&
        Objects.equals(this.ftpUsername, postWebsiteMigrationRequest.ftpUsername) &&
        Objects.equals(this.ftpPassword, postWebsiteMigrationRequest.ftpPassword) &&
        Objects.equals(this.siteBusyMig, postWebsiteMigrationRequest.siteBusyMig) &&
        Objects.equals(this.splReqMig, postWebsiteMigrationRequest.splReqMig) &&
        Objects.equals(this.domainReg, postWebsiteMigrationRequest.domainReg) &&
        Objects.equals(this.dataMig, postWebsiteMigrationRequest.dataMig) &&
        Objects.equals(this.domainRegPortal, postWebsiteMigrationRequest.domainRegPortal) &&
        Objects.equals(this.domainRegEmail, postWebsiteMigrationRequest.domainRegEmail) &&
        Objects.equals(this.domainRegPassword, postWebsiteMigrationRequest.domainRegPassword);
  }

  @Override
  public int hashCode() {
    return Objects.hash(custPortal, regEmail, password, ctrlPanel, ftpUsername, ftpPassword, siteBusyMig, splReqMig, domainReg, dataMig, domainRegPortal, domainRegEmail, domainRegPassword);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PostWebsiteMigrationRequest {\n");
    
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

