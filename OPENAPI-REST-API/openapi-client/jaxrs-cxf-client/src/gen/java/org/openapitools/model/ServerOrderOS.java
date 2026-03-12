package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * An operating system option available when ordering a dedicated server.
 */
@ApiModel(description="An operating system option available when ordering a dedicated server.")

public class ServerOrderOS  {
  
 /**
  * Operating System ID.
  */
  @ApiModelProperty(example = "51", value = "Operating System ID.")

  private String id;

 /**
  * Operating System price.
  */
  @ApiModelProperty(example = "0", value = "Operating System price.")

  private Integer price;

 /**
  * Operating System image.
  */
  @ApiModelProperty(value = "Operating System image.")

  private String img;

 /**
  * Short description of the OS.
  */
  @ApiModelProperty(example = "AlmaLinux", value = "Short description of the OS.")

  private String shortDesc;

 /**
  * Long description of the OS.
  */
  @ApiModelProperty(value = "Long description of the OS.")

  private String longDesc;

 /**
  * Monthly price.
  */
  @ApiModelProperty(example = "0", value = "Monthly price.")

  private Integer monthlyPrice;

 /**
  * Active status.
  */
  @ApiModelProperty(example = "1", value = "Active status.")

  private String active;

 /**
  * Display of OS price.
  */
  @ApiModelProperty(example = "$0.00", value = "Display of OS price.")

  private String priceDisplay;

 /**
  * Display of monthly OS price.
  */
  @ApiModelProperty(example = "$0.00", value = "Display of monthly OS price.")

  private String monthlyPriceDisplay;
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderOS serverOrderOS = (ServerOrderOS) o;
    return Objects.equals(this.id, serverOrderOS.id) &&
        Objects.equals(this.price, serverOrderOS.price) &&
        Objects.equals(this.img, serverOrderOS.img) &&
        Objects.equals(this.shortDesc, serverOrderOS.shortDesc) &&
        Objects.equals(this.longDesc, serverOrderOS.longDesc) &&
        Objects.equals(this.monthlyPrice, serverOrderOS.monthlyPrice) &&
        Objects.equals(this.active, serverOrderOS.active) &&
        Objects.equals(this.priceDisplay, serverOrderOS.priceDisplay) &&
        Objects.equals(this.monthlyPriceDisplay, serverOrderOS.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, monthlyPrice, active, priceDisplay, monthlyPriceDisplay);
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
  private static String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

