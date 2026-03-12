(ns inter-server-management-api.specs.license-client-link
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def license-client-link-data
  {
   (ds/req :label) string?
   (ds/req :link) string?
   (ds/req :icon) string?
   (ds/req :help_text) string?
   (ds/opt :icon_text) string?
   (ds/opt :other_attr) string?
   })

(def license-client-link-spec
  (ds/spec
    {:name ::license-client-link
     :spec license-client-link-data}))
