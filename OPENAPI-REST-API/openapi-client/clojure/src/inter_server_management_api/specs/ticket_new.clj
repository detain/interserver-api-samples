(ns inter-server-management-api.specs.ticket-new
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ticket-new-data
  {
   (ds/req :subject) string?
   (ds/req :body) string?
   (ds/opt :service_id) int?
   (ds/opt :service_module) string?
   })

(def ticket-new-spec
  (ds/spec
    {:name ::ticket-new
     :spec ticket-new-data}))
