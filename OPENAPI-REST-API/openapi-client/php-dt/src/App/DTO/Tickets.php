<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A listing of support tickets.
 */
class Tickets
{
    #[DTA\Data(field: "ima")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $ima = null;

    #[DTA\Data(field: "custid")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $custid = null;

    #[DTA\Data(field: "view")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $view = null;

    #[DTA\Data(field: "currentPage")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $current_page = null;

    #[DTA\Data(field: "limit")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $limit = null;

    #[DTA\Data(field: "sortcol")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $sortcol = null;

    #[DTA\Data(field: "sortdir")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $sortdir = null;

    #[DTA\Data(field: "rowsOffset")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $rows_offset = null;

    #[DTA\Data(field: "tickets")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection107::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection107::class])]
    public \App\DTO\Collection107|null $tickets = null;

    #[DTA\Data(field: "pages")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $pages = null;

    #[DTA\Data(field: "rowsTotal")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $rows_total = null;

    #[DTA\Data(field: "inboxCount")]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $inbox_count = null;

    #[DTA\Data(field: "countArray")]
    #[DTA\Strategy("Object", ["type" => \App\DTO\TicketsCountArray::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\TicketsCountArray::class])]
    public \App\DTO\TicketsCountArray|null $count_array = null;

    #[DTA\Data(field: "viewText")]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $view_text = null;

}
