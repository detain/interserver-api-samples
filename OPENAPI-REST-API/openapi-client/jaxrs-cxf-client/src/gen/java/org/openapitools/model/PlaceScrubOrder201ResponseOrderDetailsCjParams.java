package org.openapitools.model;


import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class PlaceScrubOrder201ResponseOrderDetailsCjParams  {
  
  @ApiModelProperty(example = "1684", value = "")

  private Integer containerTagId;

  @ApiModelProperty(example = "2314", value = "")

  private Integer CID;

  @ApiModelProperty(example = "scrub_ips12424", value = "")

  private String OID;

  @ApiModelProperty(example = "2242343242", value = "")

  private Integer TYPE;

  @ApiModelProperty(example = "scrub_ips904", value = "")

  private String ITEM1;

  @ApiModelProperty(example = "5", value = "")

  private Integer AMT1;

  @ApiModelProperty(example = "1", value = "")

  private Integer QTY1;

  @ApiModelProperty(example = "USD", value = "")

  private String CURRENCY;
 /**
   * Get containerTagId
   * @return containerTagId
  **/
  @JsonProperty("containerTagId")
  public Integer getContainerTagId() {
    return containerTagId;
  }

  public void setContainerTagId(Integer containerTagId) {
    this.containerTagId = containerTagId;
  }

  public PlaceScrubOrder201ResponseOrderDetailsCjParams containerTagId(Integer containerTagId) {
    this.containerTagId = containerTagId;
    return this;
  }

 /**
   * Get CID
   * @return CID
  **/
  @JsonProperty("CID")
  public Integer getCID() {
    return CID;
  }

  public void setCID(Integer CID) {
    this.CID = CID;
  }

  public PlaceScrubOrder201ResponseOrderDetailsCjParams CID(Integer CID) {
    this.CID = CID;
    return this;
  }

 /**
   * Get OID
   * @return OID
  **/
  @JsonProperty("OID")
  public String getOID() {
    return OID;
  }

  public void setOID(String OID) {
    this.OID = OID;
  }

  public PlaceScrubOrder201ResponseOrderDetailsCjParams OID(String OID) {
    this.OID = OID;
    return this;
  }

 /**
   * Get TYPE
   * @return TYPE
  **/
  @JsonProperty("TYPE")
  public Integer getTYPE() {
    return TYPE;
  }

  public void setTYPE(Integer TYPE) {
    this.TYPE = TYPE;
  }

  public PlaceScrubOrder201ResponseOrderDetailsCjParams TYPE(Integer TYPE) {
    this.TYPE = TYPE;
    return this;
  }

 /**
   * Get ITEM1
   * @return ITEM1
  **/
  @JsonProperty("ITEM1")
  public String getITEM1() {
    return ITEM1;
  }

  public void setITEM1(String ITEM1) {
    this.ITEM1 = ITEM1;
  }

  public PlaceScrubOrder201ResponseOrderDetailsCjParams ITEM1(String ITEM1) {
    this.ITEM1 = ITEM1;
    return this;
  }

 /**
   * Get AMT1
   * @return AMT1
  **/
  @JsonProperty("AMT1")
  public Integer getAMT1() {
    return AMT1;
  }

  public void setAMT1(Integer AMT1) {
    this.AMT1 = AMT1;
  }

  public PlaceScrubOrder201ResponseOrderDetailsCjParams AMT1(Integer AMT1) {
    this.AMT1 = AMT1;
    return this;
  }

 /**
   * Get QTY1
   * @return QTY1
  **/
  @JsonProperty("QTY1")
  public Integer getQTY1() {
    return QTY1;
  }

  public void setQTY1(Integer QTY1) {
    this.QTY1 = QTY1;
  }

  public PlaceScrubOrder201ResponseOrderDetailsCjParams QTY1(Integer QTY1) {
    this.QTY1 = QTY1;
    return this;
  }

 /**
   * Get CURRENCY
   * @return CURRENCY
  **/
  @JsonProperty("CURRENCY")
  public String getCURRENCY() {
    return CURRENCY;
  }

  public void setCURRENCY(String CURRENCY) {
    this.CURRENCY = CURRENCY;
  }

  public PlaceScrubOrder201ResponseOrderDetailsCjParams CURRENCY(String CURRENCY) {
    this.CURRENCY = CURRENCY;
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
    PlaceScrubOrder201ResponseOrderDetailsCjParams placeScrubOrder201ResponseOrderDetailsCjParams = (PlaceScrubOrder201ResponseOrderDetailsCjParams) o;
    return Objects.equals(this.containerTagId, placeScrubOrder201ResponseOrderDetailsCjParams.containerTagId) &&
        Objects.equals(this.CID, placeScrubOrder201ResponseOrderDetailsCjParams.CID) &&
        Objects.equals(this.OID, placeScrubOrder201ResponseOrderDetailsCjParams.OID) &&
        Objects.equals(this.TYPE, placeScrubOrder201ResponseOrderDetailsCjParams.TYPE) &&
        Objects.equals(this.ITEM1, placeScrubOrder201ResponseOrderDetailsCjParams.ITEM1) &&
        Objects.equals(this.AMT1, placeScrubOrder201ResponseOrderDetailsCjParams.AMT1) &&
        Objects.equals(this.QTY1, placeScrubOrder201ResponseOrderDetailsCjParams.QTY1) &&
        Objects.equals(this.CURRENCY, placeScrubOrder201ResponseOrderDetailsCjParams.CURRENCY);
  }

  @Override
  public int hashCode() {
    return Objects.hash(containerTagId, CID, OID, TYPE, ITEM1, AMT1, QTY1, CURRENCY);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PlaceScrubOrder201ResponseOrderDetailsCjParams {\n");
    
    sb.append("    containerTagId: ").append(toIndentedString(containerTagId)).append("\n");
    sb.append("    CID: ").append(toIndentedString(CID)).append("\n");
    sb.append("    OID: ").append(toIndentedString(OID)).append("\n");
    sb.append("    TYPE: ").append(toIndentedString(TYPE)).append("\n");
    sb.append("    ITEM1: ").append(toIndentedString(ITEM1)).append("\n");
    sb.append("    AMT1: ").append(toIndentedString(AMT1)).append("\n");
    sb.append("    QTY1: ").append(toIndentedString(QTY1)).append("\n");
    sb.append("    CURRENCY: ").append(toIndentedString(CURRENCY)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

