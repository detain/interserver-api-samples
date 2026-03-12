package io.swagger.model;

import io.swagger.v3.oas.annotations.media.Schema;
import javax.validation.constraints.*;

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
  * A bandwidth option available when ordering a dedicated server.
 **/
@Schema(description="A bandwidth option available when ordering a dedicated server.")
public class ServerOrderBandwidth   {
  
  @Schema(example = "15", description = "Bandwidth ID.")
 /**
   * Bandwidth ID.  
  **/
  private String id = null;
  
  @Schema(example = "0", description = "Bandwidth price.")
 /**
   * Bandwidth price.  
  **/
  private Integer price = null;
  
  @Schema(example = "bandwidth.jpg", description = "Bandwidth image.")
 /**
   * Bandwidth image.  
  **/
  private String img = null;
  
  @Schema(example = "150TB (10Gb Port)", description = "Short description of the bandwidth.")
 /**
   * Short description of the bandwidth.  
  **/
  private String shortDesc = null;
  
  @Schema(example = " - 2000GB Bandwidth...", description = "Long description of the bandwidth.")
 /**
   * Long description of the bandwidth.  
  **/
  private String longDesc = null;
  
  @Schema(example = "Standard", description = "Bandwidth type.")
 /**
   * Bandwidth type.  
  **/
  private String type = null;
  
  @Schema(example = "4000", description = "Quantity of bandwidth.")
 /**
   * Quantity of bandwidth.  
  **/
  private String qty = null;
  
  @Schema(example = "1", description = "Active status.")
 /**
   * Active status.  
  **/
  private String active = null;
  
  @Schema(example = "15", description = "Monthly price.")
 /**
   * Monthly price.  
  **/
  private Integer monthlyPrice = null;
  
  @Schema(example = "$0.00", description = "Display of bandwidth price.")
 /**
   * Display of bandwidth price.  
  **/
  private String priceDisplay = null;
  
  @Schema(example = "$15.00", description = "Display of monthly bandwidth price.")
 /**
   * Display of monthly bandwidth price.  
  **/
  private String monthlyPriceDisplay = null;
 /**
   * Bandwidth ID.
   * @return id
  **/
  @JsonProperty("id")
  @NotNull
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderBandwidth id(String id) {
    this.id = id;
    return this;
  }

 /**
   * Bandwidth price.
   * @return price
  **/
  @JsonProperty("price")
  @NotNull
  public Integer getPrice() {
    return price;
  }

  public void setPrice(Integer price) {
    this.price = price;
  }

  public ServerOrderBandwidth price(Integer price) {
    this.price = price;
    return this;
  }

 /**
   * Bandwidth image.
   * @return img
  **/
  @JsonProperty("img")
  @NotNull
  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderBandwidth img(String img) {
    this.img = img;
    return this;
  }

 /**
   * Short description of the bandwidth.
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  @NotNull
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderBandwidth shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Long description of the bandwidth.
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  @NotNull
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderBandwidth longDesc(String longDesc) {
    this.longDesc = longDesc;
    return this;
  }

 /**
   * Bandwidth type.
   * @return type
  **/
  @JsonProperty("type")
  @NotNull
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public ServerOrderBandwidth type(String type) {
    this.type = type;
    return this;
  }

 /**
   * Quantity of bandwidth.
   * @return qty
  **/
  @JsonProperty("qty")
  @NotNull
  public String getQty() {
    return qty;
  }

  public void setQty(String qty) {
    this.qty = qty;
  }

  public ServerOrderBandwidth qty(String qty) {
    this.qty = qty;
    return this;
  }

 /**
   * Active status.
   * @return active
  **/
  @JsonProperty("active")
  @NotNull
  public String getActive() {
    return active;
  }

  public void setActive(String active) {
    this.active = active;
  }

  public ServerOrderBandwidth active(String active) {
    this.active = active;
    return this;
  }

 /**
   * Monthly price.
   * @return monthlyPrice
  **/
  @JsonProperty("monthly_price")
  @NotNull
  public Integer getMonthlyPrice() {
    return monthlyPrice;
  }

  public void setMonthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
  }

  public ServerOrderBandwidth monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

 /**
   * Display of bandwidth price.
   * @return priceDisplay
  **/
  @JsonProperty("price_display")
  @NotNull
  public String getPriceDisplay() {
    return priceDisplay;
  }

  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  public ServerOrderBandwidth priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

 /**
   * Display of monthly bandwidth price.
   * @return monthlyPriceDisplay
  **/
  @JsonProperty("monthly_price_display")
  @NotNull
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public ServerOrderBandwidth monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderBandwidth {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    qty: ").append(toIndentedString(qty)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
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
