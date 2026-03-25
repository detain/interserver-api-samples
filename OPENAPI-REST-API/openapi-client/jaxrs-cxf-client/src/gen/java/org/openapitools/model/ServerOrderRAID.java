package org.openapitools.model;


import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;

/**
 * A RAID configuration option available when ordering a dedicated server.
 */
@ApiModel(description="A RAID configuration option available when ordering a dedicated server.")

public class ServerOrderRAID  {
  
 /**
  * RAID ID.
  */
  @ApiModelProperty(example = "7", value = "RAID ID.")

  private String id;

 /**
  * RAID price.
  */
  @ApiModelProperty(example = "50", value = "RAID price.")

  private Integer price;

 /**
  * RAID image.
  */
  @ApiModelProperty(example = "raid.png", value = "RAID image.")

  private String img;

 /**
  * Short description of the RAID.
  */
  @ApiModelProperty(example = "Hardware Raid 5", value = "Short description of the RAID.")

  private String shortDesc;

 /**
  * Long description of the RAID.
  */
  @ApiModelProperty(example = "Hardware Raid 5", value = "Long description of the RAID.")

  private String longDesc;

 /**
  * Monthly price.
  */
  @ApiModelProperty(example = "50", value = "Monthly price.")

  private Integer monthlyPrice;

 /**
  * Active status.
  */
  @ApiModelProperty(example = "1", value = "Active status.")

  private String active;

 /**
  * Display of RAID price.
  */
  @ApiModelProperty(example = "$50.00", value = "Display of RAID price.")

  private String priceDisplay;

 /**
  * Display of monthly RAID price.
  */
  @ApiModelProperty(example = "$50.00", value = "Display of monthly RAID price.")

  private String monthlyPriceDisplay;
 /**
   * RAID ID.
   * @return id
  **/
  @JsonProperty("id")
  public String getId() {
    return id;
  }

  public void setId(String id) {
    this.id = id;
  }

  public ServerOrderRAID id(String id) {
    this.id = id;
    return this;
  }

 /**
   * RAID price.
   * @return price
  **/
  @JsonProperty("price")
  public Integer getPrice() {
    return price;
  }

  public void setPrice(Integer price) {
    this.price = price;
  }

  public ServerOrderRAID price(Integer price) {
    this.price = price;
    return this;
  }

 /**
   * RAID image.
   * @return img
  **/
  @JsonProperty("img")
  public String getImg() {
    return img;
  }

  public void setImg(String img) {
    this.img = img;
  }

  public ServerOrderRAID img(String img) {
    this.img = img;
    return this;
  }

 /**
   * Short description of the RAID.
   * @return shortDesc
  **/
  @JsonProperty("short_desc")
  public String getShortDesc() {
    return shortDesc;
  }

  public void setShortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
  }

  public ServerOrderRAID shortDesc(String shortDesc) {
    this.shortDesc = shortDesc;
    return this;
  }

 /**
   * Long description of the RAID.
   * @return longDesc
  **/
  @JsonProperty("long_desc")
  public String getLongDesc() {
    return longDesc;
  }

  public void setLongDesc(String longDesc) {
    this.longDesc = longDesc;
  }

  public ServerOrderRAID longDesc(String longDesc) {
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

  public ServerOrderRAID monthlyPrice(Integer monthlyPrice) {
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

  public ServerOrderRAID active(String active) {
    this.active = active;
    return this;
  }

 /**
   * Display of RAID price.
   * @return priceDisplay
  **/
  @JsonProperty("price_display")
  public String getPriceDisplay() {
    return priceDisplay;
  }

  public void setPriceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
  }

  public ServerOrderRAID priceDisplay(String priceDisplay) {
    this.priceDisplay = priceDisplay;
    return this;
  }

 /**
   * Display of monthly RAID price.
   * @return monthlyPriceDisplay
  **/
  @JsonProperty("monthly_price_display")
  public String getMonthlyPriceDisplay() {
    return monthlyPriceDisplay;
  }

  public void setMonthlyPriceDisplay(String monthlyPriceDisplay) {
    this.monthlyPriceDisplay = monthlyPriceDisplay;
  }

  public ServerOrderRAID monthlyPriceDisplay(String monthlyPriceDisplay) {
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
    ServerOrderRAID serverOrderRAID = (ServerOrderRAID) o;
    return Objects.equals(this.id, serverOrderRAID.id) &&
        Objects.equals(this.price, serverOrderRAID.price) &&
        Objects.equals(this.img, serverOrderRAID.img) &&
        Objects.equals(this.shortDesc, serverOrderRAID.shortDesc) &&
        Objects.equals(this.longDesc, serverOrderRAID.longDesc) &&
        Objects.equals(this.monthlyPrice, serverOrderRAID.monthlyPrice) &&
        Objects.equals(this.active, serverOrderRAID.active) &&
        Objects.equals(this.priceDisplay, serverOrderRAID.priceDisplay) &&
        Objects.equals(this.monthlyPriceDisplay, serverOrderRAID.monthlyPriceDisplay);
  }

  @Override
  public int hashCode() {
    return Objects.hash(id, price, img, shortDesc, longDesc, monthlyPrice, active, priceDisplay, monthlyPriceDisplay);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ServerOrderRAID {\n");
    
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
    return o == null ? "null" : o.toString().replace("\n", "\n    ");
  }
}

