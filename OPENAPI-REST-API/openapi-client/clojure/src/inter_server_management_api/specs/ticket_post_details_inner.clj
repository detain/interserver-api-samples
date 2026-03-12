(ns inter-server-management-api.specs.ticket-post-details-inner
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ticket-post-details-inner-data
  {
   (ds/opt :post_id) int?
   (ds/opt :date) string?
   (ds/opt :contents) string?
   (ds/opt :creator) string?
   (ds/opt :creator_email) string?
   (ds/opt :creator_name) string?
   (ds/opt :hasattachments) int?
   (ds/opt :attachment_download) string?
   })

(def ticket-post-details-inner-spec
  (ds/spec
    {:name ::ticket-post-details-inner
     :spec ticket-post-details-inner-data}))
