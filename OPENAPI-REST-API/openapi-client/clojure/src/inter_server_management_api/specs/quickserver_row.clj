(ns inter-server-management-api.specs.quickserver-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def quickserver-row-data
  {
   (ds/req :qs_id) string?
   (ds/req :qs_name) string?
   (ds/req :cost) string?
   (ds/req :qs_hostname) string?
   (ds/req :qs_status) string?
   (ds/req :qs_comment) string?
   })

(def quickserver-row-spec
  (ds/spec
    {:name ::quickserver-row
     :spec quickserver-row-data}))
