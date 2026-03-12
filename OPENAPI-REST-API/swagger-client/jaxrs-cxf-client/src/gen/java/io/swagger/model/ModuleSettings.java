package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;

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

/**
  * The settings for a module.
 **/
@Schema(description="The settings for a module.")
public class ModuleSettings   {
  
  @Schema(example = "0", required = true, description = "")
  private Integer SERVICE_ID_OFFSET = null;
  
  @Schema(example = "true", required = true, description = "")
  private Boolean USE_REPEAT_INVOICE = null;
  
  @Schema(example = "true", required = true, description = "")
  private Boolean USE_PACKAGES = null;
  
  @Schema(example = "0", required = true, description = "")
  private Integer BILLING_DAYS_OFFSET = null;
  
  @Schema(example = "root-server.png", required = true, description = "")
  private String IMGNAME = null;
  
  @Schema(example = "2", required = true, description = "")
  private Integer REPEAT_BILLING_METHOD = null;
  
  @Schema(example = "45", required = true, description = "")
  private Integer DELETE_PENDING_DAYS = null;
  
  @Schema(example = "14", required = true, description = "")
  private Integer SUSPEND_DAYS = null;
  
  @Schema(example = "7", required = true, description = "")
  private Integer SUSPEND_WARNING_DAYS = null;
  
  @Schema(example = "VPS", required = true, description = "")
  private String TITLE = null;
  
  @Schema(example = "VPS", required = true, description = "")
  private String MENUNAME = null;
  
  @Schema(example = "support@interserver.net\"", required = true, description = "")
  private String EMAIL_FROM = null;
  
  @Schema(example = "VPS", required = true, description = "")
  private String TBLNAME = null;
  
  @Schema(example = "vps", required = true, description = "")
  private String TABLE = null;
  
  @Schema(example = "vps_hostname", required = true, description = "")
  private String TITLE_FIELD = null;
  
  @Schema(example = "vps_ip", description = "")
  private String tiTLEFIELD2 = null;
  
  @Schema(example = "vps_vzid", description = "")
  private String tiTLEFIELD3 = null;
  
  @Schema(example = "vps", required = true, description = "")
  private String PREFIX = null;
 /**
   * Get SERVICE_ID_OFFSET
   * @return SERVICE_ID_OFFSET
  **/
  @JsonProperty("SERVICE_ID_OFFSET")
  public Integer getSERVICEIDOFFSET() {
    return SERVICE_ID_OFFSET;
  }

  public void setSERVICEIDOFFSET(Integer SERVICE_ID_OFFSET) {
    this.SERVICE_ID_OFFSET = SERVICE_ID_OFFSET;
  }

  public ModuleSettings SERVICE_ID_OFFSET(Integer SERVICE_ID_OFFSET) {
    this.SERVICE_ID_OFFSET = SERVICE_ID_OFFSET;
    return this;
  }

 /**
   * Get USE_REPEAT_INVOICE
   * @return USE_REPEAT_INVOICE
  **/
  @JsonProperty("USE_REPEAT_INVOICE")
  public Boolean isUSEREPEATINVOICE() {
    return USE_REPEAT_INVOICE;
  }

  public void setUSEREPEATINVOICE(Boolean USE_REPEAT_INVOICE) {
    this.USE_REPEAT_INVOICE = USE_REPEAT_INVOICE;
  }

  public ModuleSettings USE_REPEAT_INVOICE(Boolean USE_REPEAT_INVOICE) {
    this.USE_REPEAT_INVOICE = USE_REPEAT_INVOICE;
    return this;
  }

 /**
   * Get USE_PACKAGES
   * @return USE_PACKAGES
  **/
  @JsonProperty("USE_PACKAGES")
  public Boolean isUSEPACKAGES() {
    return USE_PACKAGES;
  }

  public void setUSEPACKAGES(Boolean USE_PACKAGES) {
    this.USE_PACKAGES = USE_PACKAGES;
  }

  public ModuleSettings USE_PACKAGES(Boolean USE_PACKAGES) {
    this.USE_PACKAGES = USE_PACKAGES;
    return this;
  }

 /**
   * Get BILLING_DAYS_OFFSET
   * @return BILLING_DAYS_OFFSET
  **/
  @JsonProperty("BILLING_DAYS_OFFSET")
  public Integer getBILLINGDAYSOFFSET() {
    return BILLING_DAYS_OFFSET;
  }

  public void setBILLINGDAYSOFFSET(Integer BILLING_DAYS_OFFSET) {
    this.BILLING_DAYS_OFFSET = BILLING_DAYS_OFFSET;
  }

  public ModuleSettings BILLING_DAYS_OFFSET(Integer BILLING_DAYS_OFFSET) {
    this.BILLING_DAYS_OFFSET = BILLING_DAYS_OFFSET;
    return this;
  }

 /**
   * Get IMGNAME
   * @return IMGNAME
  **/
  @JsonProperty("IMGNAME")
  public String getIMGNAME() {
    return IMGNAME;
  }

  public void setIMGNAME(String IMGNAME) {
    this.IMGNAME = IMGNAME;
  }

  public ModuleSettings IMGNAME(String IMGNAME) {
    this.IMGNAME = IMGNAME;
    return this;
  }

 /**
   * Get REPEAT_BILLING_METHOD
   * @return REPEAT_BILLING_METHOD
  **/
  @JsonProperty("REPEAT_BILLING_METHOD")
  public Integer getREPEATBILLINGMETHOD() {
    return REPEAT_BILLING_METHOD;
  }

  public void setREPEATBILLINGMETHOD(Integer REPEAT_BILLING_METHOD) {
    this.REPEAT_BILLING_METHOD = REPEAT_BILLING_METHOD;
  }

  public ModuleSettings REPEAT_BILLING_METHOD(Integer REPEAT_BILLING_METHOD) {
    this.REPEAT_BILLING_METHOD = REPEAT_BILLING_METHOD;
    return this;
  }

 /**
   * Get DELETE_PENDING_DAYS
   * @return DELETE_PENDING_DAYS
  **/
  @JsonProperty("DELETE_PENDING_DAYS")
  public Integer getDELETEPENDINGDAYS() {
    return DELETE_PENDING_DAYS;
  }

  public void setDELETEPENDINGDAYS(Integer DELETE_PENDING_DAYS) {
    this.DELETE_PENDING_DAYS = DELETE_PENDING_DAYS;
  }

  public ModuleSettings DELETE_PENDING_DAYS(Integer DELETE_PENDING_DAYS) {
    this.DELETE_PENDING_DAYS = DELETE_PENDING_DAYS;
    return this;
  }

 /**
   * Get SUSPEND_DAYS
   * @return SUSPEND_DAYS
  **/
  @JsonProperty("SUSPEND_DAYS")
  public Integer getSUSPENDDAYS() {
    return SUSPEND_DAYS;
  }

  public void setSUSPENDDAYS(Integer SUSPEND_DAYS) {
    this.SUSPEND_DAYS = SUSPEND_DAYS;
  }

  public ModuleSettings SUSPEND_DAYS(Integer SUSPEND_DAYS) {
    this.SUSPEND_DAYS = SUSPEND_DAYS;
    return this;
  }

 /**
   * Get SUSPEND_WARNING_DAYS
   * @return SUSPEND_WARNING_DAYS
  **/
  @JsonProperty("SUSPEND_WARNING_DAYS")
  public Integer getSUSPENDWARNINGDAYS() {
    return SUSPEND_WARNING_DAYS;
  }

  public void setSUSPENDWARNINGDAYS(Integer SUSPEND_WARNING_DAYS) {
    this.SUSPEND_WARNING_DAYS = SUSPEND_WARNING_DAYS;
  }

  public ModuleSettings SUSPEND_WARNING_DAYS(Integer SUSPEND_WARNING_DAYS) {
    this.SUSPEND_WARNING_DAYS = SUSPEND_WARNING_DAYS;
    return this;
  }

 /**
   * Get TITLE
   * @return TITLE
  **/
  @JsonProperty("TITLE")
  public String getTITLE() {
    return TITLE;
  }

  public void setTITLE(String TITLE) {
    this.TITLE = TITLE;
  }

  public ModuleSettings TITLE(String TITLE) {
    this.TITLE = TITLE;
    return this;
  }

 /**
   * Get MENUNAME
   * @return MENUNAME
  **/
  @JsonProperty("MENUNAME")
  public String getMENUNAME() {
    return MENUNAME;
  }

  public void setMENUNAME(String MENUNAME) {
    this.MENUNAME = MENUNAME;
  }

  public ModuleSettings MENUNAME(String MENUNAME) {
    this.MENUNAME = MENUNAME;
    return this;
  }

 /**
   * Get EMAIL_FROM
   * @return EMAIL_FROM
  **/
  @JsonProperty("EMAIL_FROM")
  public String getEMAILFROM() {
    return EMAIL_FROM;
  }

  public void setEMAILFROM(String EMAIL_FROM) {
    this.EMAIL_FROM = EMAIL_FROM;
  }

  public ModuleSettings EMAIL_FROM(String EMAIL_FROM) {
    this.EMAIL_FROM = EMAIL_FROM;
    return this;
  }

 /**
   * Get TBLNAME
   * @return TBLNAME
  **/
  @JsonProperty("TBLNAME")
  public String getTBLNAME() {
    return TBLNAME;
  }

  public void setTBLNAME(String TBLNAME) {
    this.TBLNAME = TBLNAME;
  }

  public ModuleSettings TBLNAME(String TBLNAME) {
    this.TBLNAME = TBLNAME;
    return this;
  }

 /**
   * Get TABLE
   * @return TABLE
  **/
  @JsonProperty("TABLE")
  public String getTABLE() {
    return TABLE;
  }

  public void setTABLE(String TABLE) {
    this.TABLE = TABLE;
  }

  public ModuleSettings TABLE(String TABLE) {
    this.TABLE = TABLE;
    return this;
  }

 /**
   * Get TITLE_FIELD
   * @return TITLE_FIELD
  **/
  @JsonProperty("TITLE_FIELD")
  public String getTITLEFIELD() {
    return TITLE_FIELD;
  }

  public void setTITLEFIELD(String TITLE_FIELD) {
    this.TITLE_FIELD = TITLE_FIELD;
  }

  public ModuleSettings TITLE_FIELD(String TITLE_FIELD) {
    this.TITLE_FIELD = TITLE_FIELD;
    return this;
  }

 /**
   * Get tiTLEFIELD2
   * @return tiTLEFIELD2
  **/
  @JsonProperty("TITLE_FIELD2")
  public String getTiTLEFIELD2() {
    return tiTLEFIELD2;
  }

  public void setTiTLEFIELD2(String tiTLEFIELD2) {
    this.tiTLEFIELD2 = tiTLEFIELD2;
  }

  public ModuleSettings tiTLEFIELD2(String tiTLEFIELD2) {
    this.tiTLEFIELD2 = tiTLEFIELD2;
    return this;
  }

 /**
   * Get tiTLEFIELD3
   * @return tiTLEFIELD3
  **/
  @JsonProperty("TITLE_FIELD3")
  public String getTiTLEFIELD3() {
    return tiTLEFIELD3;
  }

  public void setTiTLEFIELD3(String tiTLEFIELD3) {
    this.tiTLEFIELD3 = tiTLEFIELD3;
  }

  public ModuleSettings tiTLEFIELD3(String tiTLEFIELD3) {
    this.tiTLEFIELD3 = tiTLEFIELD3;
    return this;
  }

 /**
   * Get PREFIX
   * @return PREFIX
  **/
  @JsonProperty("PREFIX")
  public String getPREFIX() {
    return PREFIX;
  }

  public void setPREFIX(String PREFIX) {
    this.PREFIX = PREFIX;
  }

  public ModuleSettings PREFIX(String PREFIX) {
    this.PREFIX = PREFIX;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ModuleSettings {\n");
    
    sb.append("    SERVICE_ID_OFFSET: ").append(toIndentedString(SERVICE_ID_OFFSET)).append("\n");
    sb.append("    USE_REPEAT_INVOICE: ").append(toIndentedString(USE_REPEAT_INVOICE)).append("\n");
    sb.append("    USE_PACKAGES: ").append(toIndentedString(USE_PACKAGES)).append("\n");
    sb.append("    BILLING_DAYS_OFFSET: ").append(toIndentedString(BILLING_DAYS_OFFSET)).append("\n");
    sb.append("    IMGNAME: ").append(toIndentedString(IMGNAME)).append("\n");
    sb.append("    REPEAT_BILLING_METHOD: ").append(toIndentedString(REPEAT_BILLING_METHOD)).append("\n");
    sb.append("    DELETE_PENDING_DAYS: ").append(toIndentedString(DELETE_PENDING_DAYS)).append("\n");
    sb.append("    SUSPEND_DAYS: ").append(toIndentedString(SUSPEND_DAYS)).append("\n");
    sb.append("    SUSPEND_WARNING_DAYS: ").append(toIndentedString(SUSPEND_WARNING_DAYS)).append("\n");
    sb.append("    TITLE: ").append(toIndentedString(TITLE)).append("\n");
    sb.append("    MENUNAME: ").append(toIndentedString(MENUNAME)).append("\n");
    sb.append("    EMAIL_FROM: ").append(toIndentedString(EMAIL_FROM)).append("\n");
    sb.append("    TBLNAME: ").append(toIndentedString(TBLNAME)).append("\n");
    sb.append("    TABLE: ").append(toIndentedString(TABLE)).append("\n");
    sb.append("    TITLE_FIELD: ").append(toIndentedString(TITLE_FIELD)).append("\n");
    sb.append("    tiTLEFIELD2: ").append(toIndentedString(tiTLEFIELD2)).append("\n");
    sb.append("    tiTLEFIELD3: ").append(toIndentedString(tiTLEFIELD3)).append("\n");
    sb.append("    PREFIX: ").append(toIndentedString(PREFIX)).append("\n");
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
