package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * The settings for a module.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "The settings for a module.")

public class ModuleSettings   {

  private @Valid Integer SERVICE_ID_OFFSET = null;

  private @Valid Boolean USE_REPEAT_INVOICE = null;

  private @Valid Boolean USE_PACKAGES = null;

  private @Valid Integer BILLING_DAYS_OFFSET = null;

  private @Valid String IMGNAME = null;

  private @Valid Integer REPEAT_BILLING_METHOD = null;

  private @Valid Integer DELETE_PENDING_DAYS = null;

  private @Valid Integer SUSPEND_DAYS = null;

  private @Valid Integer SUSPEND_WARNING_DAYS = null;

  private @Valid String TITLE = null;

  private @Valid String MENUNAME = null;

  private @Valid String EMAIL_FROM = null;

  private @Valid String TBLNAME = null;

  private @Valid String TABLE = null;

  private @Valid String TITLE_FIELD = null;

  private @Valid String tiTLEFIELD2 = null;

  private @Valid String tiTLEFIELD3 = null;

  private @Valid String PREFIX = null;

  /**
   **/
  public ModuleSettings SERVICE_ID_OFFSET(Integer SERVICE_ID_OFFSET) {
    this.SERVICE_ID_OFFSET = SERVICE_ID_OFFSET;
    return this;
  }

  
  @ApiModelProperty(example = "0", required = true, value = "")
  @JsonProperty("SERVICE_ID_OFFSET")
  @NotNull

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

  
  @ApiModelProperty(example = "true", required = true, value = "")
  @JsonProperty("USE_REPEAT_INVOICE")
  @NotNull

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

  
  @ApiModelProperty(example = "true", required = true, value = "")
  @JsonProperty("USE_PACKAGES")
  @NotNull

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

  
  @ApiModelProperty(example = "0", required = true, value = "")
  @JsonProperty("BILLING_DAYS_OFFSET")
  @NotNull

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

  
  @ApiModelProperty(example = "root-server.png", required = true, value = "")
  @JsonProperty("IMGNAME")
  @NotNull

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

  
  @ApiModelProperty(example = "2", required = true, value = "")
  @JsonProperty("REPEAT_BILLING_METHOD")
  @NotNull

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

  
  @ApiModelProperty(example = "45", required = true, value = "")
  @JsonProperty("DELETE_PENDING_DAYS")
  @NotNull

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

  
  @ApiModelProperty(example = "14", required = true, value = "")
  @JsonProperty("SUSPEND_DAYS")
  @NotNull

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

  
  @ApiModelProperty(example = "7", required = true, value = "")
  @JsonProperty("SUSPEND_WARNING_DAYS")
  @NotNull

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

  
  @ApiModelProperty(example = "VPS", required = true, value = "")
  @JsonProperty("TITLE")
  @NotNull

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

  
  @ApiModelProperty(example = "VPS", required = true, value = "")
  @JsonProperty("MENUNAME")
  @NotNull

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

  
  @ApiModelProperty(example = "support@interserver.net\"", required = true, value = "")
  @JsonProperty("EMAIL_FROM")
  @NotNull

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

  
  @ApiModelProperty(example = "VPS", required = true, value = "")
  @JsonProperty("TBLNAME")
  @NotNull

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

  
  @ApiModelProperty(example = "vps", required = true, value = "")
  @JsonProperty("TABLE")
  @NotNull

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

  
  @ApiModelProperty(example = "vps_hostname", required = true, value = "")
  @JsonProperty("TITLE_FIELD")
  @NotNull

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

  
  @ApiModelProperty(example = "vps_ip", value = "")
  @JsonProperty("TITLE_FIELD2")
  @NotNull

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

  
  @ApiModelProperty(example = "vps_vzid", value = "")
  @JsonProperty("TITLE_FIELD3")
  @NotNull

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

  
  @ApiModelProperty(example = "vps", required = true, value = "")
  @JsonProperty("PREFIX")
  @NotNull

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
