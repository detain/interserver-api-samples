(ns inter-server-management-api.specs.reply-ticket-response-schema
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def reply-ticket-response-schema-data
  {
   (ds/opt :success) boolean?
   (ds/opt :post_id) int?
   })

(def reply-ticket-response-schema-spec
  (ds/spec
    {:name ::reply-ticket-response-schema
     :spec reply-ticket-response-schema-data}))
