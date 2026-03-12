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
  * An IP block option available when ordering a dedicated server.
 **/
@Schema(description="An IP block option available when ordering a dedicated server.")
public class ServerOrderIP   {
  
  @Schema(example = "9", description = "IP ID.")
 /**
   * IP ID.  
  **/
  private String id = null;
  
  @Schema(example = "0", description = "IP price.")
 /**
   * IP price.  
  **/
  private Integer price = null;
  
  @Schema(example = "ips.jpg", description = "IP image.")
 /**
   * IP image.  
  **/
  private String img = null;
  
  @Schema(example = "1 Vlan Ip (/30)", description = "Short description of the IP.")
 /**
   * Short description of the IP.  
  **/
  private String shortDesc = null;
  
  @Schema(example = "1 IP In personal Vlan", description = "Long description of the IP.")
 /**
   * Long description of the IP.  
  **/
  private String longDesc = null;
  
  @Schema(example = "1", description = "Quantity of IPs.")
 /**
   * Quantity of IPs.  
  **/
  private String qty = null;
  
  @Schema(example = "0", description = "Monthly price.")
 /**
   * Monthly price.  
  **/
  private Integer monthlyPrice = null;
  
  @Schema(example = "$0.00", description = "Display of IP price.")
 /**
   * Display of IP price.  
  **/
  private String priceDisplay = null;
  
  @Schema(example = "$0.00", description = "Display of monthly IP price.")
 /**
   * Display of monthly IP price.  
  **/
  private String monthlyPriceDisplay = null;
 /**
   * IP ID.
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderIP id(String id) {
    this.id = id;
    return this;
  }

 /**
   * IP price.
   * @return price
  **/
  @JsonProperty("price")
  public Integer getPrice() {
    return price;
  }

  public void setPrice(Integer price) {
    this.price = price;
  }

  public ServerOrderIP price(Integer price) {
    this.price = price;
    return this;
  }

 /**
   * IP image.
   * @return img
  **/
  @JsonProperty("img")
  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderIP img(String img) {
    this.img = img;
    return this;
  }

 /**
   * Short description of the IP.
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderIP shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Long description of the IP.
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderIP longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

 /**
   * Quantity of IPs.
   * @return qty
  **/
  @JsonProperty("qty")
  public String getQty() {
    return qty;
  }

  public void setQty(String qty) {
    this.qty = qty;
  }

  public ServerOrderIP qty(String qty) {
    this.qty = qty;
    return this;
  }

 /**
   * Monthly price.
   * @return monthlyPrice
  **/
  @JsonProperty("monthly_price")
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public ServerOrderIP monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

 /**
   * Display of IP price.
   * @return priceDisplay
  **/
  @JsonProperty("price_display")
  public String getPriceDisplay() {
    return priceDisplay;
  }

  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  public ServerOrderIP priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

 /**
   * Display of monthly IP price.
   * @return monthlyPriceDisplay
  **/
  @JsonProperty("monthly_price_display")
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public ServerOrderIP monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderIP {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    qty: ").append(toIndentedString(qty)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    priceDisplay: ").append(toIndentedString(priceDisplay)).append("\n");
    sb.append("    monthlyPriceDisplay: ").append(toIndentedString(monthlyPriceDisplay)).append("\n");
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
