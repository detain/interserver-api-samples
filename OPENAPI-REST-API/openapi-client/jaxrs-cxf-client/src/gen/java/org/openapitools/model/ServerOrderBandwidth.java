package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A bandwidth option available when ordering a dedicated server.
 */
@ApiModel(description="A bandwidth option available when ordering a dedicated server.")

public class ServerOrderBandwidth  {
  
 /**
  * Bandwidth ID.
  */
  @ApiModelProperty(example = "15", value = "Bandwidth ID.")

  private String id;

 /**
  * Bandwidth price.
  */
  @ApiModelProperty(example = "0", value = "Bandwidth price.")

  private Integer price;

 /**
  * Bandwidth image.
  */
  @ApiModelProperty(example = "bandwidth.jpg", value = "Bandwidth image.")

  private String img;

 /**
  * Short description of the bandwidth.
  */
  @ApiModelProperty(example = "150TB (10Gb Port)", value = "Short description of the bandwidth.")

  private String shortDesc;

 /**
  * Long description of the bandwidth.
  */
  @ApiModelProperty(example = " - 2000GB Bandwidth...", value = "Long description of the bandwidth.")

  private String longDesc;

 /**
  * Bandwidth type.
  */
  @ApiModelProperty(example = "Standard", value = "Bandwidth type.")

  private String type;

 /**
  * Quantity of bandwidth.
  */
  @ApiModelProperty(example = "4000", value = "Quantity of bandwidth.")

  private String qty;

 /**
  * Active status.
  */
  @ApiModelProperty(example = "1", value = "Active status.")

  private String active;

 /**
  * Monthly price.
  */
  @ApiModelProperty(example = "15", value = "Monthly price.")

  private Integer monthlyPrice;

 /**
  * Display of bandwidth price.
  */
  @ApiModelProperty(example = "$0.00", value = "Display of bandwidth price.")

  private String priceDisplay;

 /**
  * Display of monthly bandwidth price.
  */
  @ApiModelProperty(example = "$15.00", value = "Display of monthly bandwidth price.")

  private String monthlyPriceDisplay;
 /**
   * Bandwidth ID.
   * @return id
  **/
  @JsonProperty("id")
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
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ServerOrderBandwidth serverOrderBandwidth = (ServerOrderBandwidth) o;
    return Objects.equals(this.id, serverOrderBandwidth.id) &&
        Objects.equals(this.price, serverOrderBandwidth.price) &&
        Objects.equals(this.img, serverOrderBandwidth.img) &&
        Objects.equals(this.shortDesc, serverOrderBandwidth.shortDesc) &&
        Objects.equals(this.longDesc, serverOrderBandwidth.longDesc) &&
        Objects.equals(this.type, serverOrderBandwidth.type) &&
        Objects.equals(this.qty, serverOrderBandwidth.qty) &&
        Objects.equals(this.active, serverOrderBandwidth.active) &&
        Objects.equals(this.monthlyPrice, serverOrderBandwidth.monthlyPrice) &&
        Objects.equals(this.priceDisplay, serverOrderBandwidth.priceDisplay) &&
        Objects.equals(this.monthlyPriceDisplay, serverOrderBandwidth.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, type, qty, active, monthlyPrice, priceDisplay, monthlyPriceDisplay);
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
  private static String toIndentedString(Object o) {
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

