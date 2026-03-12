(ns inter-server-management-api.specs.reply-ticket-request
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def reply-ticket-request-data
  {
   (ds/opt :content) string?
   })

(def reply-ticket-request-spec
  (ds/spec
    {:name ::reply-ticket-request
     :spec reply-ticket-request-data}))
