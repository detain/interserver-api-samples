(ns inter-server-management-api.specs.home-ticket-status-view
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def home-ticket-status-view-data
  {
   (ds/opt :4) string?
   (ds/opt :5) string?
   (ds/opt :6) string?
   })

(def home-ticket-status-view-spec
  (ds/spec
    {:name ::home-ticket-status-view
     :spec home-ticket-status-view-data}))
