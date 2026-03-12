(ns inter-server-management-api.specs.vps-client-link
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-client-link-data
  {
   (ds/opt :label) string?
   (ds/opt :link) string?
   (ds/opt :icon) string?
   (ds/opt :icon_text) string?
   (ds/opt :help_text) string?
   })

(def vps-client-link-spec
  (ds/spec
    {:name ::vps-client-link
     :spec vps-client-link-data}))
