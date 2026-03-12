(ns inter-server-management-api.specs.home-ticket-status
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-ticket-status-data
  {
   (ds/opt :Open) int?
   (ds/opt :OnHold) int?
   })

(def home-ticket-status-spec
  (ds/spec
    {:name ::home-ticket-status
     :spec home-ticket-status-data}))
