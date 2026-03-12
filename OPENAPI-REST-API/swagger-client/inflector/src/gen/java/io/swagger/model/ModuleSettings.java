package io.swagger.model;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.v3.oas.annotations.media.Schema;


/**
 * The settings for a module.
 **/
@Schema(description = "The settings for a module.")


public class ModuleSettings   {
  @JsonProperty("SERVICE_ID_OFFSET")
  private Integer SERVICE_ID_OFFSET = null;
  @JsonProperty("USE_REPEAT_INVOICE")
  private Boolean USE_REPEAT_INVOICE = null;
  @JsonProperty("USE_PACKAGES")
  private Boolean USE_PACKAGES = null;
  @JsonProperty("BILLING_DAYS_OFFSET")
  private Integer BILLING_DAYS_OFFSET = null;
  @JsonProperty("IMGNAME")
  private String IMGNAME = null;
  @JsonProperty("REPEAT_BILLING_METHOD")
  private Integer REPEAT_BILLING_METHOD = null;
  @JsonProperty("DELETE_PENDING_DAYS")
  private Integer DELETE_PENDING_DAYS = null;
  @JsonProperty("SUSPEND_DAYS")
  private Integer SUSPEND_DAYS = null;
  @JsonProperty("SUSPEND_WARNING_DAYS")
  private Integer SUSPEND_WARNING_DAYS = null;
  @JsonProperty("TITLE")
  private String TITLE = null;
  @JsonProperty("MENUNAME")
  private String MENUNAME = null;
  @JsonProperty("EMAIL_FROM")
  private String EMAIL_FROM = null;
  @JsonProperty("TBLNAME")
  private String TBLNAME = null;
  @JsonProperty("TABLE")
  private String TABLE = null;
  @JsonProperty("TITLE_FIELD")
  private String TITLE_FIELD = null;
  @JsonProperty("TITLE_FIELD2")
  private String tiTLEFIELD2 = null;
  @JsonProperty("TITLE_FIELD3")
  private String tiTLEFIELD3 = null;
  @JsonProperty("PREFIX")
  private String PREFIX = null;
  /**
   **/
  public ModuleSettings SERVICE_ID_OFFSET(Integer SERVICE_ID_OFFSET) {
    this.SERVICE_ID_OFFSET = SERVICE_ID_OFFSET;
    return this;
  }

  
  @Schema(example = "0", required = true, description = "")
  @JsonProperty("SERVICE_ID_OFFSET")
  public Integer getSERVICEIDOFFSET() {
    return SERVICE_ID_OFFSET;
  }
  public void setSERVICEIDOFFSET(Integer SERVICE_ID_OFFSET) {
    this.SERVICE_ID_OFFSET = SERVICE_ID_OFFSET;
  }

  /**
   **/
  public ModuleSettings USE_REPEAT_INVOICE(Boolean USE_REPEAT_INVOICE) {
    this.USE_REPEAT_INVOICE = USE_REPEAT_INVOICE;
    return this;
  }

  
  @Schema(example = "true", required = true, description = "")
  @JsonProperty("USE_REPEAT_INVOICE")
  public Boolean isUSEREPEATINVOICE() {
    return USE_REPEAT_INVOICE;
  }
  public void setUSEREPEATINVOICE(Boolean USE_REPEAT_INVOICE) {
    this.USE_REPEAT_INVOICE = USE_REPEAT_INVOICE;
  }

  /**
   **/
  public ModuleSettings USE_PACKAGES(Boolean USE_PACKAGES) {
    this.USE_PACKAGES = USE_PACKAGES;
    return this;
  }

  
  @Schema(example = "true", required = true, description = "")
  @JsonProperty("USE_PACKAGES")
  public Boolean isUSEPACKAGES() {
    return USE_PACKAGES;
  }
  public void setUSEPACKAGES(Boolean USE_PACKAGES) {
    this.USE_PACKAGES = USE_PACKAGES;
  }

  /**
   **/
  public ModuleSettings BILLING_DAYS_OFFSET(Integer BILLING_DAYS_OFFSET) {
    this.BILLING_DAYS_OFFSET = BILLING_DAYS_OFFSET;
    return this;
  }

  
  @Schema(example = "0", required = true, description = "")
  @JsonProperty("BILLING_DAYS_OFFSET")
  public Integer getBILLINGDAYSOFFSET() {
    return BILLING_DAYS_OFFSET;
  }
  public void setBILLINGDAYSOFFSET(Integer BILLING_DAYS_OFFSET) {
    this.BILLING_DAYS_OFFSET = BILLING_DAYS_OFFSET;
  }

  /**
   **/
  public ModuleSettings IMGNAME(String IMGNAME) {
    this.IMGNAME = IMGNAME;
    return this;
  }

  
  @Schema(example = "root-server.png", required = true, description = "")
  @JsonProperty("IMGNAME")
  public String getIMGNAME() {
    return IMGNAME;
  }
  public void setIMGNAME(String IMGNAME) {
    this.IMGNAME = IMGNAME;
  }

  /**
   **/
  public ModuleSettings REPEAT_BILLING_METHOD(Integer REPEAT_BILLING_METHOD) {
    this.REPEAT_BILLING_METHOD = REPEAT_BILLING_METHOD;
    return this;
  }

  
  @Schema(example = "2", required = true, description = "")
  @JsonProperty("REPEAT_BILLING_METHOD")
  public Integer getREPEATBILLINGMETHOD() {
    return REPEAT_BILLING_METHOD;
  }
  public void setREPEATBILLINGMETHOD(Integer REPEAT_BILLING_METHOD) {
    this.REPEAT_BILLING_METHOD = REPEAT_BILLING_METHOD;
  }

  /**
   **/
  public ModuleSettings DELETE_PENDING_DAYS(Integer DELETE_PENDING_DAYS) {
    this.DELETE_PENDING_DAYS = DELETE_PENDING_DAYS;
    return this;
  }

  
  @Schema(example = "45", required = true, description = "")
  @JsonProperty("DELETE_PENDING_DAYS")
  public Integer getDELETEPENDINGDAYS() {
    return DELETE_PENDING_DAYS;
  }
  public void setDELETEPENDINGDAYS(Integer DELETE_PENDING_DAYS) {
    this.DELETE_PENDING_DAYS = DELETE_PENDING_DAYS;
  }

  /**
   **/
  public ModuleSettings SUSPEND_DAYS(Integer SUSPEND_DAYS) {
    this.SUSPEND_DAYS = SUSPEND_DAYS;
    return this;
  }

  
  @Schema(example = "14", required = true, description = "")
  @JsonProperty("SUSPEND_DAYS")
  public Integer getSUSPENDDAYS() {
    return SUSPEND_DAYS;
  }
  public void setSUSPENDDAYS(Integer SUSPEND_DAYS) {
    this.SUSPEND_DAYS = SUSPEND_DAYS;
  }

  /**
   **/
  public ModuleSettings SUSPEND_WARNING_DAYS(Integer SUSPEND_WARNING_DAYS) {
    this.SUSPEND_WARNING_DAYS = SUSPEND_WARNING_DAYS;
    return this;
  }

  
  @Schema(example = "7", required = true, description = "")
  @JsonProperty("SUSPEND_WARNING_DAYS")
  public Integer getSUSPENDWARNINGDAYS() {
    return SUSPEND_WARNING_DAYS;
  }
  public void setSUSPENDWARNINGDAYS(Integer SUSPEND_WARNING_DAYS) {
    this.SUSPEND_WARNING_DAYS = SUSPEND_WARNING_DAYS;
  }

  /**
   **/
  public ModuleSettings TITLE(String TITLE) {
    this.TITLE = TITLE;
    return this;
  }

  
  @Schema(example = "VPS", required = true, description = "")
  @JsonProperty("TITLE")
  public String getTITLE() {
    return TITLE;
  }
  public void setTITLE(String TITLE) {
    this.TITLE = TITLE;
  }

  /**
   **/
  public ModuleSettings MENUNAME(String MENUNAME) {
    this.MENUNAME = MENUNAME;
    return this;
  }

  
  @Schema(example = "VPS", required = true, description = "")
  @JsonProperty("MENUNAME")
  public String getMENUNAME() {
    return MENUNAME;
  }
  public void setMENUNAME(String MENUNAME) {
    this.MENUNAME = MENUNAME;
  }

  /**
   **/
  public ModuleSettings EMAIL_FROM(String EMAIL_FROM) {
    this.EMAIL_FROM = EMAIL_FROM;
    return this;
  }

  
  @Schema(example = "support@interserver.net\"", required = true, description = "")
  @JsonProperty("EMAIL_FROM")
  public String getEMAILFROM() {
    return EMAIL_FROM;
  }
  public void setEMAILFROM(String EMAIL_FROM) {
    this.EMAIL_FROM = EMAIL_FROM;
  }

  /**
   **/
  public ModuleSettings TBLNAME(String TBLNAME) {
    this.TBLNAME = TBLNAME;
    return this;
  }

  
  @Schema(example = "VPS", required = true, description = "")
  @JsonProperty("TBLNAME")
  public String getTBLNAME() {
    return TBLNAME;
  }
  public void setTBLNAME(String TBLNAME) {
    this.TBLNAME = TBLNAME;
  }

  /**
   **/
  public ModuleSettings TABLE(String TABLE) {
    this.TABLE = TABLE;
    return this;
  }

  
  @Schema(example = "vps", required = true, description = "")
  @JsonProperty("TABLE")
  public String getTABLE() {
    return TABLE;
  }
  public void setTABLE(String TABLE) {
    this.TABLE = TABLE;
  }

  /**
   **/
  public ModuleSettings TITLE_FIELD(String TITLE_FIELD) {
    this.TITLE_FIELD = TITLE_FIELD;
    return this;
  }

  
  @Schema(example = "vps_hostname", required = true, description = "")
  @JsonProperty("TITLE_FIELD")
  public String getTITLEFIELD() {
    return TITLE_FIELD;
  }
  public void setTITLEFIELD(String TITLE_FIELD) {
    this.TITLE_FIELD = TITLE_FIELD;
  }

  /**
   **/
  public ModuleSettings tiTLEFIELD2(String tiTLEFIELD2) {
    this.tiTLEFIELD2 = tiTLEFIELD2;
    return this;
  }

  
  @Schema(example = "vps_ip", description = "")
  @JsonProperty("TITLE_FIELD2")
  public String getTiTLEFIELD2() {
    return tiTLEFIELD2;
  }
  public void setTiTLEFIELD2(String tiTLEFIELD2) {
    this.tiTLEFIELD2 = tiTLEFIELD2;
  }

  /**
   **/
  public ModuleSettings tiTLEFIELD3(String tiTLEFIELD3) {
    this.tiTLEFIELD3 = tiTLEFIELD3;
    return this;
  }

  
  @Schema(example = "vps_vzid", description = "")
  @JsonProperty("TITLE_FIELD3")
  public String getTiTLEFIELD3() {
    return tiTLEFIELD3;
  }
  public void setTiTLEFIELD3(String tiTLEFIELD3) {
    this.tiTLEFIELD3 = tiTLEFIELD3;
  }

  /**
   **/
  public ModuleSettings PREFIX(String PREFIX) {
    this.PREFIX = PREFIX;
    return this;
  }

  
  @Schema(example = "vps", required = true, description = "")
  @JsonProperty("PREFIX")
  public String getPREFIX() {
    return PREFIX;
  }
  public void setPREFIX(String PREFIX) {
    this.PREFIX = PREFIX;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ModuleSettings moduleSettings = (ModuleSettings) o;
    return Objects.equals(SERVICE_ID_OFFSET, moduleSettings.SERVICE_ID_OFFSET) &&
        Objects.equals(USE_REPEAT_INVOICE, moduleSettings.USE_REPEAT_INVOICE) &&
        Objects.equals(USE_PACKAGES, moduleSettings.USE_PACKAGES) &&
        Objects.equals(BILLING_DAYS_OFFSET, moduleSettings.BILLING_DAYS_OFFSET) &&
        Objects.equals(IMGNAME, moduleSettings.IMGNAME) &&
        Objects.equals(REPEAT_BILLING_METHOD, moduleSettings.REPEAT_BILLING_METHOD) &&
        Objects.equals(DELETE_PENDING_DAYS, moduleSettings.DELETE_PENDING_DAYS) &&
        Objects.equals(SUSPEND_DAYS, moduleSettings.SUSPEND_DAYS) &&
        Objects.equals(SUSPEND_WARNING_DAYS, moduleSettings.SUSPEND_WARNING_DAYS) &&
        Objects.equals(TITLE, moduleSettings.TITLE) &&
        Objects.equals(MENUNAME, moduleSettings.MENUNAME) &&
        Objects.equals(EMAIL_FROM, moduleSettings.EMAIL_FROM) &&
        Objects.equals(TBLNAME, moduleSettings.TBLNAME) &&
        Objects.equals(TABLE, moduleSettings.TABLE) &&
        Objects.equals(TITLE_FIELD, moduleSettings.TITLE_FIELD) &&
        Objects.equals(tiTLEFIELD2, moduleSettings.tiTLEFIELD2) &&
        Objects.equals(tiTLEFIELD3, moduleSettings.tiTLEFIELD3) &&
        Objects.equals(PREFIX, moduleSettings.PREFIX);
  }

  @Override
  public int hashCode() {
    return Objects.hash(SERVICE_ID_OFFSET, USE_REPEAT_INVOICE, USE_PACKAGES, BILLING_DAYS_OFFSET, IMGNAME, REPEAT_BILLING_METHOD, DELETE_PENDING_DAYS, SUSPEND_DAYS, SUSPEND_WARNING_DAYS, TITLE, MENUNAME, EMAIL_FROM, TBLNAME, TABLE, TITLE_FIELD, tiTLEFIELD2, tiTLEFIELD3, PREFIX);
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
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
