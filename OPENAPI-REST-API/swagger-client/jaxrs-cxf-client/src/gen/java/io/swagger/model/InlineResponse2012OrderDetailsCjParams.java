package io.swagger.model;


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

public class InlineResponse2012OrderDetailsCjParams   {
  
  @Schema(example = "1684", description = "")
  private Integer containerTagId = null;
  
  @Schema(example = "2314", description = "")
  private Integer CID = null;
  
  @Schema(example = "scrub_ips12424", description = "")
  private String OID = null;
  
  @Schema(example = "2242343242", description = "")
  private Integer TYPE = null;
  
  @Schema(example = "scrub_ips904", description = "")
  private String itEM1 = null;
  
  @Schema(example = "5", description = "")
  private Integer amT1 = null;
  
  @Schema(example = "1", description = "")
  private Integer qtY1 = null;
  
  @Schema(example = "USD", description = "")
  private String CURRENCY = null;
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

  public InlineResponse2012OrderDetailsCjParams containerTagId(Integer containerTagId) {
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

  public InlineResponse2012OrderDetailsCjParams CID(Integer CID) {
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

  public InlineResponse2012OrderDetailsCjParams OID(String OID) {
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

  public InlineResponse2012OrderDetailsCjParams TYPE(Integer TYPE) {
    this.TYPE = TYPE;
    return this;
  }

 /**
   * Get itEM1
   * @return itEM1
  **/
  @JsonProperty("ITEM1")
  public String getItEM1() {
    return itEM1;
  }

  public void setItEM1(String itEM1) {
    this.itEM1 = itEM1;
  }

  public InlineResponse2012OrderDetailsCjParams itEM1(String itEM1) {
    this.itEM1 = itEM1;
    return this;
  }

 /**
   * Get amT1
   * @return amT1
  **/
  @JsonProperty("AMT1")
  public Integer getAmT1() {
    return amT1;
  }

  public void setAmT1(Integer amT1) {
    this.amT1 = amT1;
  }

  public InlineResponse2012OrderDetailsCjParams amT1(Integer amT1) {
    this.amT1 = amT1;
    return this;
  }

 /**
   * Get qtY1
   * @return qtY1
  **/
  @JsonProperty("QTY1")
  public Integer getQtY1() {
    return qtY1;
  }

  public void setQtY1(Integer qtY1) {
    this.qtY1 = qtY1;
  }

  public InlineResponse2012OrderDetailsCjParams qtY1(Integer qtY1) {
    this.qtY1 = qtY1;
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

  public InlineResponse2012OrderDetailsCjParams CURRENCY(String CURRENCY) {
    this.CURRENCY = CURRENCY;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2012OrderDetailsCjParams {\n");
    
    sb.append("    containerTagId: ").append(toIndentedString(containerTagId)).append("\n");
    sb.append("    CID: ").append(toIndentedString(CID)).append("\n");
    sb.append("    OID: ").append(toIndentedString(OID)).append("\n");
    sb.append("    TYPE: ").append(toIndentedString(TYPE)).append("\n");
    sb.append("    itEM1: ").append(toIndentedString(itEM1)).append("\n");
    sb.append("    amT1: ").append(toIndentedString(amT1)).append("\n");
    sb.append("    qtY1: ").append(toIndentedString(qtY1)).append("\n");
    sb.append("    CURRENCY: ").append(toIndentedString(CURRENCY)).append("\n");
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
