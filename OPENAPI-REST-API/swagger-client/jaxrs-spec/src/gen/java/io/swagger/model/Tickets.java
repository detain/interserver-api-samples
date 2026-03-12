package io.swagger.model;

import io.swagger.model.TicketsCountArray;
import io.swagger.model.TicketsRow;
import io.swagger.v3.oas.annotations.media.Schema;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import javax.validation.Valid;

/**
 * A listing of support tickets.
 **/
import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
@Schema(description = "A listing of support tickets.")

public class Tickets   {

  private @Valid String ima = null;

  private @Valid String custid = null;

  private @Valid String view = null;

  private @Valid Integer currentPage = null;

  private @Valid Integer limit = null;

  private @Valid Integer sortcol = null;

  private @Valid Integer sortdir = null;

  private @Valid Integer rowsOffset = null;

  private @Valid List<TicketsRow> tickets = new ArrayList<TicketsRow>();

  private @Valid Integer pages = null;

  private @Valid Integer rowsTotal = null;

  private @Valid Integer inboxCount = null;

  private @Valid TicketsCountArray countArray = null;

  private @Valid String viewText = null;

  /**
   **/
  public Tickets ima(String ima) {
    this.ima = ima;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("ima")
  @NotNull

  public String getIma() {
    return ima;
  }
  public void setIma(String ima) {
    this.ima = ima;
  }

  /**
   **/
  public Tickets custid(String custid) {
    this.custid = custid;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("custid")
  @NotNull

  public String getCustid() {
    return custid;
  }
  public void setCustid(String custid) {
    this.custid = custid;
  }

  /**
   **/
  public Tickets view(String view) {
    this.view = view;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("view")
  @NotNull

  public String getView() {
    return view;
  }
  public void setView(String view) {
    this.view = view;
  }

  /**
   **/
  public Tickets currentPage(Integer currentPage) {
    this.currentPage = currentPage;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("currentPage")
  @NotNull

  public Integer getCurrentPage() {
    return currentPage;
  }
  public void setCurrentPage(Integer currentPage) {
    this.currentPage = currentPage;
  }

  /**
   **/
  public Tickets limit(Integer limit) {
    this.limit = limit;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("limit")
  @NotNull

  public Integer getLimit() {
    return limit;
  }
  public void setLimit(Integer limit) {
    this.limit = limit;
  }

  /**
   **/
  public Tickets sortcol(Integer sortcol) {
    this.sortcol = sortcol;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("sortcol")
  @NotNull

  public Integer getSortcol() {
    return sortcol;
  }
  public void setSortcol(Integer sortcol) {
    this.sortcol = sortcol;
  }

  /**
   **/
  public Tickets sortdir(Integer sortdir) {
    this.sortdir = sortdir;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("sortdir")
  @NotNull

  public Integer getSortdir() {
    return sortdir;
  }
  public void setSortdir(Integer sortdir) {
    this.sortdir = sortdir;
  }

  /**
   **/
  public Tickets rowsOffset(Integer rowsOffset) {
    this.rowsOffset = rowsOffset;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("rowsOffset")
  @NotNull

  public Integer getRowsOffset() {
    return rowsOffset;
  }
  public void setRowsOffset(Integer rowsOffset) {
    this.rowsOffset = rowsOffset;
  }

  /**
   **/
  public Tickets tickets(List<TicketsRow> tickets) {
    this.tickets = tickets;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("tickets")
  @NotNull

  public List<TicketsRow> getTickets() {
    return tickets;
  }
  public void setTickets(List<TicketsRow> tickets) {
    this.tickets = tickets;
  }

  /**
   **/
  public Tickets pages(Integer pages) {
    this.pages = pages;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("pages")
  @NotNull

  public Integer getPages() {
    return pages;
  }
  public void setPages(Integer pages) {
    this.pages = pages;
  }

  /**
   **/
  public Tickets rowsTotal(Integer rowsTotal) {
    this.rowsTotal = rowsTotal;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("rowsTotal")
  @NotNull

  public Integer getRowsTotal() {
    return rowsTotal;
  }
  public void setRowsTotal(Integer rowsTotal) {
    this.rowsTotal = rowsTotal;
  }

  /**
   **/
  public Tickets inboxCount(Integer inboxCount) {
    this.inboxCount = inboxCount;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("inboxCount")
  @NotNull

  public Integer getInboxCount() {
    return inboxCount;
  }
  public void setInboxCount(Integer inboxCount) {
    this.inboxCount = inboxCount;
  }

  /**
   **/
  public Tickets countArray(TicketsCountArray countArray) {
    this.countArray = countArray;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("countArray")
  @NotNull

  public TicketsCountArray getCountArray() {
    return countArray;
  }
  public void setCountArray(TicketsCountArray countArray) {
    this.countArray = countArray;
  }

  /**
   **/
  public Tickets viewText(String viewText) {
    this.viewText = viewText;
    return this;
  }

  
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("viewText")
  @NotNull

  public String getViewText() {
    return viewText;
  }
  public void setViewText(String viewText) {
    this.viewText = viewText;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Tickets tickets = (Tickets) o;
    return Objects.equals(ima, tickets.ima) &&
        Objects.equals(custid, tickets.custid) &&
        Objects.equals(view, tickets.view) &&
        Objects.equals(currentPage, tickets.currentPage) &&
        Objects.equals(limit, tickets.limit) &&
        Objects.equals(sortcol, tickets.sortcol) &&
        Objects.equals(sortdir, tickets.sortdir) &&
        Objects.equals(rowsOffset, tickets.rowsOffset) &&
        Objects.equals(tickets, tickets.tickets) &&
        Objects.equals(pages, tickets.pages) &&
        Objects.equals(rowsTotal, tickets.rowsTotal) &&
        Objects.equals(inboxCount, tickets.inboxCount) &&
        Objects.equals(countArray, tickets.countArray) &&
        Objects.equals(viewText, tickets.viewText);
  }

  @Override
  public int hashCode() {
    return Objects.hash(ima, custid, view, currentPage, limit, sortcol, sortdir, rowsOffset, tickets, pages, rowsTotal, inboxCount, countArray, viewText);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Tickets {\n");
    
    sb.append("    ima: ").append(toIndentedString(ima)).append("\n");
    sb.append("    custid: ").append(toIndentedString(custid)).append("\n");
    sb.append("    view: ").append(toIndentedString(view)).append("\n");
    sb.append("    currentPage: ").append(toIndentedString(currentPage)).append("\n");
    sb.append("    limit: ").append(toIndentedString(limit)).append("\n");
    sb.append("    sortcol: ").append(toIndentedString(sortcol)).append("\n");
    sb.append("    sortdir: ").append(toIndentedString(sortdir)).append("\n");
    sb.append("    rowsOffset: ").append(toIndentedString(rowsOffset)).append("\n");
    sb.append("    tickets: ").append(toIndentedString(tickets)).append("\n");
    sb.append("    pages: ").append(toIndentedString(pages)).append("\n");
    sb.append("    rowsTotal: ").append(toIndentedString(rowsTotal)).append("\n");
    sb.append("    inboxCount: ").append(toIndentedString(inboxCount)).append("\n");
    sb.append("    countArray: ").append(toIndentedString(countArray)).append("\n");
    sb.append("    viewText: ").append(toIndentedString(viewText)).append("\n");
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
