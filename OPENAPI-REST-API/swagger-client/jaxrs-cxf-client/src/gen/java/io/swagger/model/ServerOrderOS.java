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
  * An operating system option available when ordering a dedicated server.
 **/
@Schema(description="An operating system option available when ordering a dedicated server.")
public class ServerOrderOS   {
  
  @Schema(example = "51", description = "Operating System ID.")
 /**
   * Operating System ID.  
  **/
  private String id = null;
  
  @Schema(example = "0", description = "Operating System price.")
 /**
   * Operating System price.  
  **/
  private Integer price = null;
  
  @Schema(description = "Operating System image.")
 /**
   * Operating System image.  
  **/
  private String img = null;
  
  @Schema(example = "AlmaLinux", description = "Short description of the OS.")
 /**
   * Short description of the OS.  
  **/
  private String shortDesc = null;
  
  @Schema(description = "Long description of the OS.")
 /**
   * Long description of the OS.  
  **/
  private String longDesc = null;
  
  @Schema(example = "0", description = "Monthly price.")
 /**
   * Monthly price.  
  **/
  private Integer monthlyPrice = null;
  
  @Schema(example = "1", description = "Active status.")
 /**
   * Active status.  
  **/
  private String active = null;
  
  @Schema(example = "$0.00", description = "Display of OS price.")
 /**
   * Display of OS price.  
  **/
  private String priceDisplay = null;
  
  @Schema(example = "$0.00", description = "Display of monthly OS price.")
 /**
   * Display of monthly OS price.  
  **/
  private String monthlyPriceDisplay = null;
 /**
   * Operating System ID.
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderOS id(String id) {
    this.id = id;
    return this;
  }

 /**
   * Operating System price.
   * @return price
  **/
  @JsonProperty("price")
  public Integer getPrice() {
    return price;
  }

  public void setPrice(Integer price) {
    this.price = price;
  }

  public ServerOrderOS price(Integer price) {
    this.price = price;
    return this;
  }

 /**
   * Operating System image.
   * @return img
  **/
  @JsonProperty("img")
  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderOS img(String img) {
    this.img = img;
    return this;
  }

 /**
   * Short description of the OS.
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderOS shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Long description of the OS.
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderOS longDesc(String longDesc) {
    this.longDesc = longDesc;
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

  public ServerOrderOS monthlyPrice(Integer monthlyPrice) {
    this.monthlyPrice = monthlyPrice;
    return this;
  }

 /**
   * Active status.
   * @return active
  **/
  @JsonProperty("active")
  public String getActive() {
    return active;
  }

  public void setActive(String active) {
    this.active = active;
  }

  public ServerOrderOS active(String active) {
    this.active = active;
    return this;
  }

 /**
   * Display of OS price.
   * @return priceDisplay
  **/
  @JsonProperty("price_display")
  public String getPriceDisplay() {
    return priceDisplay;
  }

  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  public ServerOrderOS priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

 /**
   * Display of monthly OS price.
   * @return monthlyPriceDisplay
  **/
  @JsonProperty("monthly_price_display")
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public ServerOrderOS monthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
    return this;
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderOS {\n");
    
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    price: ").append(toIndentedString(price)).append("\n");
    sb.append("    img: ").append(toIndentedString(img)).append("\n");
    sb.append("    shortDesc: ").append(toIndentedString(shortDesc)).append("\n");
    sb.append("    longDesc: ").append(toIndentedString(longDesc)).append("\n");
    sb.append("    monthlyPrice: ").append(toIndentedString(monthlyPrice)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
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
